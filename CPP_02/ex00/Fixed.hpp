#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int number;
		static const int bitsNumber = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
	};
#endif
