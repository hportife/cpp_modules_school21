#ifndef CPP_MODULE_02_FIXED_HPP
#define CPP_MODULE_02_FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &some_fx);

	~Fixed();

	void setRawBits( int const raw );
	int getRawBits( void ) const;

	Fixed &operator = (const Fixed &some_fx);

private:
	int rawBits;
	static const int bits = 8;
};

#endif //CPP_MODULE_02_FIXED_HPP
