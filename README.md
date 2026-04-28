# C++ Modules 00-04: Deep Technical Study Guide

This document provides a granular, pedagogical analysis of the foundational C++ modules (00-04). It focuses on the transition from C to C++, memory ownership, and the mechanics of Object-Oriented Programming (OOP).

---

## Module 00: Encapsulation and the "C++ Way"

Module 00 is more than syntax; it is about changing the mental model from procedural data manipulation to **Encapsulation**.

### Key Concepts by Exercise
*   **Namespaces (ex00)**: Learning to scope code to avoid naming collisions. 
    *   **Lesson**: `std::` is not just a prefix; it is a declaration of context.
*   **The Phonebook (ex01)**: The first real application of classes.
    *   **Focus**: Private vs Public access.
    *   **Lesson**: Data should be `private` by default. Access is provided only through "Getters" and "Setters," ensuring the class can validate data before storing it.
    *   **Real-World**: Any secure system (like a banking profile) uses encapsulation to prevent external code from directly modifying sensitive values (like `balance`).

---

## Module 01: Memory Ownership and References

Module 01 addresses the two most critical aspects of C++: **how objects are created** and **how they are shared**.

### Deep Dives
*   **Stack vs. Heap (New/Delete)**: 
    *   **Stack**: Automatic, fast, limited size. Objects are destroyed automatically at `}`.
    *   **Heap**: Manual, larger, persistent. Requires `new` and `delete`.
    *   **Real-World**: Games use the Stack for temporary particles and the Heap for the persistent Game Map.
*   **References vs. Pointers**:
    *   **Lesson**: A reference is a "const pointer that is automatically dereferenced." It is safer because it cannot be NULL and cannot be reassigned to a different object.
*   **Pointers to Member Functions (Harl ex03)**:
    *   **Focus**: Dynamic dispatch without `if/else`. 
    *   **Lesson**: Storing functions in a map or array based on their "address."
    *   **Real-World**: Command-line tools (like `git`) use this to map a command string (like `push`) to a specific internal function.

---

## Module 02: Ad-hoc Polymorphism & The Canonical Form

Module 02 introduces the **Fixed-Point Number** to teach **Operator Overloading** and the **Orthodox Canonical Class Form**.

### The "Rules of the Game"
Every robust C++ class that manages resources must implement the **Canonical Form** to prevent memory corruption during copies.

| Component | Responsibility |
| :--- | :--- |
| **Default Constructor** | Initializes attributes to a safe state (e.g., 0 or NULL). |
| **Copy Constructor** | Performs a **Deep Copy** of an existing object. |
| **Assignment Operator** | Cleans up current resources before performing a Deep Copy. |
| **Destructor** | Frees all resources (memory, file handles) to prevent leaks. |

*   **Fixed-Point Math**: Teaches how to represent decimals using integers. 
    *   **Why it matters**: In embedded systems without a Floating Point Unit (FPU), this is the only way to do math with decimals without a massive performance hit.

---

## Module 03: Inheritance & Hierarchy

Inheritance models the **"Is-A" relationship**. A `ScavTrap` is a `ClapTrap` with specialized behavior.

### The Mechanics of Inheritance
*   **Construction Order**: The Base class is built first, then the Child. Destruction happens in exact reverse order (Child first, then Base).
*   **Protected Access**: A middle ground between `private` (no one can see) and `public` (everyone can see). It allows children to see the data but hides it from the rest of the world.
*   **Real-World**: Designing UI systems where every element (Button, Slider, Label) inherits from a base `View` class.

---

## Module 04: Subtype Polymorphism & The VTable

This is the peak of the foundational modules. It introduces **Runtime Polymorphism** through **Virtual Functions**.

### How the VTable works (Under the Hood)
When you mark a function as `virtual`, C++ adds a hidden pointer to your class called a **vptr**. This pointer points to a **vtable** (Virtual Table)—a list of function addresses.
1.  You have a `Base* ptr = new Child();`.
2.  You call `ptr->makeSound();`.
3.  C++ doesn't look at the pointer type (`Base`); it follows the **vptr** of the object to the **vtable** and finds the `Child` version of the function.

#### The Deep Copy Challenge
*   **Focus**: If a `Dog` has a `Brain*`, a simple copy will make two dogs share the same brain (Shallow Copy).
*   **Lesson**: The Copy Constructor must use `new Brain(*other.brain)` to ensure each dog has its own independent memory.
*   **The Virtual Destructor**: If a base destructor is NOT virtual, deleting a `Child` via a `Base*` will only call the `Base` destructor, leaving the `Child`'s memory (like the Brain) leaked in the system.

---

## Technical Summary for Study

### Access Levels
| Level | Visible to Self? | Visible to Child? | Visible to Public? |
| :--- | :--- | :--- | :--- |
| `public` | Yes | Yes | Yes |
| `protected` | Yes | Yes | No |
| `private` | Yes | No | No |

### Key Idioms
- **RAII**: Resource Acquisition Is Initialization. If you open it in the constructor, close it in the destructor.
- **Deep Copy**: Always duplicate the *data*, not just the *pointer*.
- **Const Correctness**: Use `const` for any method that doesn't modify the object's state. It allows your objects to be used in read-only contexts.
