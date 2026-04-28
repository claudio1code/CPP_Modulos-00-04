# C++ Modules 00-04: Foundation to Object-Oriented Programming

This guide covers the transition from C to C++, focusing on encapsulation, memory management, and the mechanics of Object-Oriented Programming.

---

## Module 00: Encapsulation and the "C++ Way"

Module 00 introduces the fundamental shift from procedural to object-oriented thinking through **encapsulation**.

#### ex00: Namespaces - Code Organization

##### Namespace Structure

```
GLOBAL SCOPE
    ↓
std::namespace    myNamespace::    AnotherNamespace::
cout              myFunction()       anotherFunction()
string             MyClass            AnotherClass
```

##### Key Concept: Code Scoping

```cpp
namespace myModule {
    void helper() { std::cout << "Module helper\n"; }
    class Data { int value; };
}

// Usage
myModule::helper();
myModule::Data data;
```

##### Why This Matters

**Namespaces** prevent naming collisions in large projects. `std::` isn't just a prefix - it's a declaration of context that organizes the standard library.

**Real-World Impact**: Large codebases with multiple libraries use namespaces extensively. Game engines have `graphics::`, `audio::`, `physics::` namespaces to prevent function name conflicts between subsystems.

#### ex01: Phonebook - First Class Design

##### Class Encapsulation

```
CLASS DESIGN
private data → public interface → validation
name, phone    getName()        setName() with checks
             getPhone()        setPhone() with validation
```

##### Key Concept: Data Protection

```cpp
class Contact {
private:
    std::string name;
    std::string phone;
    
public:
    void setName(const std::string& newName) {
        if (!newName.empty())  // Validation
            name = newName;
    }
    
    std::string getName() const { return name; }
};
```

##### Why This Matters

**Encapsulation** protects data integrity by making members private and providing controlled access through methods. The class can validate all modifications.

**Real-World Impact**: Banking systems use encapsulation to protect account balances. External code cannot directly modify `balance` - it must go through `deposit()` and `withdraw()` methods with proper validation and logging.

---

## Module 01: Memory Ownership and References

Module 01 addresses the two most critical aspects of C++: **how objects are created** and **how they are shared**.

#### ex00-02: Stack vs Heap Memory Management

##### Memory Allocation Comparison

```
STACK ALLOCATION → HEAP ALLOCATION
Automatic lifetime   Manual lifetime
Fast allocation     Slower allocation
Limited size        Large size
Auto cleanup        Manual cleanup
int x = 42;        int* ptr = new int(42);
                   delete ptr;
```

##### Key Concept: Memory Ownership

```cpp
void stackExample() {
    int local = 42;  // Stack - destroyed automatically
}

void heapExample() {
    int* dynamic = new int(42);  // Heap - must delete manually
    delete dynamic;  // Prevent memory leak
}
```

##### Why This Matters

**Memory ownership** determines who is responsible for cleanup. Stack objects clean up automatically, while heap objects require explicit `delete`. Understanding this prevents memory leaks.

**Real-World Impact**: Games use stack for temporary particles (bullets, effects) that disappear quickly. The persistent game world, levels, and characters use heap memory that persists between frames.

#### ex03: Function Pointers & Dynamic Dispatch

##### Function Pointer Architecture

```
COMMAND STRING → FUNCTION POINTER → DYNAMIC EXECUTION
"debug"        → &Harl::debug     → harl.debug()
"info"         → &Harl::info      → harl.info()
"warning"      → &Harl::warning   → harl.warning()
```

##### Key Concept: Command Pattern

```cpp
class Harl {
    typedef void (Harl::*MemberFunc)();
    std::map<std::string, MemberFunc> commands;
    
public:
    Harl() {
        commands["debug"] = &Harl::debug;
        commands["info"] = &Harl::info;
        commands["warning"] = &Harl::warning;
    }
    
    void complain(const std::string& level) {
        if (commands.find(level) != commands.end())
            (this->*commands[level])();  // Dynamic dispatch
    }
};
```

##### Why This Matters

**Function pointers** enable dynamic dispatch without if/else chains. Storing functions in a map allows runtime selection of behavior based on string input.

**Real-World Impact**: Command-line tools like `git` use this pattern. `git push`, `git commit`, `git checkout` all map to different internal functions through command tables, enabling extensible command systems.

---

## Module 02: Ad-hoc Polymorphism & The Canonical Form

Module 02 introduces the **Fixed-Point Number** to teach **Operator Overloading** and the **Orthodox Canonical Class Form**.

#### ex00: Fixed-Point Numbers & Operator Overloading

##### Canonical Class Form

```
CLASS LIFECYCLE MANAGEMENT
Default Constructor → Copy Constructor → Assignment Operator → Destructor
Initialize safely    Deep copy            Clean + copy        Free resources
Fixed()             Fixed(const Fixed&)  operator=           ~Fixed()
```

##### Key Concept: Resource Management

```cpp
class Fixed {
private:
    int _rawValue;  // Fixed-point representation
    
public:
    // Canonical Form
    Fixed();                           // Default constructor
    Fixed(const Fixed& other);        // Copy constructor
    Fixed& operator=(const Fixed& other); // Assignment operator
    ~Fixed();                          // Destructor
    
    // Operator overloading
    Fixed operator+(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
};
```

##### Why This Matters

**The Canonical Form** ensures proper resource management. The copy constructor performs deep copies, the assignment operator cleans up before copying, and the destructor prevents leaks.

**Real-World Impact**: Embedded systems without floating-point units use fixed-point arithmetic for financial calculations, graphics rendering, and sensor data processing. It provides decimal precision without the performance cost of floating-point emulation.

---

## Module 03: Inheritance & Hierarchy

Inheritance models the **"Is-A" relationship**. A `ScavTrap` is a `ClapTrap` with specialized behavior.

#### ex00: Inheritance Hierarchy & Construction Order

##### Inheritance Architecture

```
CLASS HIERARCHY
ClapTrap (Base Class)
    ↓
ScavTrap (Derived Class)
    ↓
FragTrap (Derived Class)

CONSTRUCTION/DESTRUCTION ORDER
Base Constructor → Derived Constructor → ... → Derived Destructor → Base Destructor
```

##### Key Concept: "Is-A" Relationship

```cpp
class ClapTrap {
protected:
    std::string _name;
    int _hitPoints;
    
public:
    ClapTrap(const std::string& name);
    virtual ~ClapTrap();  // Virtual for proper cleanup
};

class ScavTrap : public ClapTrap {
public:
    ScavTrap(const std::string& name);
    void attack(const std::string& target);
    
    // Inherits _name and _hitPoints from ClapTrap
    // Can access protected members
};
```

##### Why This Matters

**Inheritance** models "is-a" relationships and enables code reuse. The base class provides common functionality, while derived classes add specialized behavior. Protected access allows children to see data while hiding it from external code.

**Real-World Impact**: UI frameworks use inheritance extensively. `Button`, `Slider`, and `Label` all inherit from a base `View` class, sharing common properties like position and size while adding specialized behavior.

---

## Module 04: Subtype Polymorphism & The VTable

This is the peak of the foundational modules. It introduces **Runtime Polymorphism** through **Virtual Functions**.

#### ex00: Virtual Functions & The VTable

##### Virtual Table Mechanism

```
RUNTIME POLYMORPHISM
Base* ptr = new Derived()
    ↓
ptr->virtualFunction()
    ↓
Follow vptr → vtable → Derived::virtualFunction()
```

##### Key Concept: Dynamic Dispatch

```cpp
class Animal {
public:
    virtual void makeSound() { std::cout << "Animal sound\n"; }
    virtual ~Animal() {}  // Virtual destructor!
};

class Dog : public Animal {
public:
    void makeSound() override { std::cout << "Woof!\n"; }
};

// Runtime polymorphism
Animal* animal = new Dog();
animal->makeSound();  // Calls Dog::makeSound()!
delete animal;        // Calls Dog destructor then Animal destructor
```

##### Why This Matters

**Virtual functions** enable runtime polymorphism. The vtable mechanism allows calling the correct function based on the object's actual type, not the pointer type. The virtual destructor ensures proper cleanup.

**Real-World Impact**: Plugin systems use virtual functions extensively. A graphics application knows only about the base `Effect` class but can call `apply()` on any derived effect (`Blur`, `Sharpen`, `ColorCorrect`) without knowing the specific type.

#### ex01-02: Deep Copy & Virtual Destructors

##### Deep Copy Challenge

```
SHALLOW COPY PROBLEM
Dog A has Brain* → Dog B copies pointer → Both dogs share same Brain!
    ↓
DEEP COPY SOLUTION  
Dog A has Brain* → Dog B creates new Brain(*A.brain) → Each dog has independent Brain
```

##### Key Concept: Resource Ownership

```cpp
class Dog {
private:
    Brain* _brain;
    
public:
    // Deep copy constructor
    Dog(const Dog& other) : _brain(new Brain(*other._brain)) {}
    
    // Assignment operator with deep copy
    Dog& operator=(const Dog& other) {
        if (this != &other) {
            delete _brain;                    // Clean up old brain
            _brain = new Brain(*other._brain); // Create new brain
        }
        return *this;
    }
    
    virtual ~Dog() { delete _brain; }  // Virtual destructor!
};
```

##### Why This Matters

**Deep copy** prevents multiple objects from sharing the same resources. Without proper copy semantics, modifying one object could unexpectedly affect another. Virtual destructors ensure derived classes clean up properly when deleted through base pointers.

**Real-World Impact**: Database connection pools use deep copy semantics. Each connection object must have its own independent network socket and state. Sharing connections between objects would cause race conditions and corrupted data.

---

## Quick Reference

### Access Levels
| Level | Self | Child | Public |
|-------|------|-------|---------|
| `public` | ✓ | ✓ | ✓ |
| `protected` | ✓ | ✓ | ✗ |
| `private` | ✓ | ✗ | ✗ |

### Key C++ Idioms
- **RAII**: Resource Acquisition Is Initialization - cleanup in destructors
- **Deep Copy**: Duplicate data, not just pointers
- **Virtual Destructor**: Essential for polymorphic cleanup
- **Canonical Form**: Default constructor, copy constructor, assignment operator, destructor

### Memory Management Patterns
- **Stack**: Automatic lifetime, fast, limited size
- **Heap**: Manual lifetime, slower, large size
- **References**: Safer than pointers, cannot be null
- **Smart Pointers**: Modern C++ automatic memory management (future modules)

---

## Learning Path

1. **Module 00**: Master encapsulation and class design
2. **Module 01**: Understand memory ownership and references
3. **Module 02**: Learn canonical form and operator overloading
4. **Module 03**: Explore inheritance and construction order
5. **Module 04**: Master virtual functions and polymorphism

Each module builds upon the previous one, creating a solid foundation for advanced C++ concepts in modules 05-09.

---

*This simplified study guide focuses on essential concepts with practical examples and real-world applications. Use it as a quick reference while working through the foundational C++ modules.*
