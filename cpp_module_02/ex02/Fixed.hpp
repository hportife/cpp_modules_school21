#ifndef CPP_MODULE_02_FIXED_HPP
#define CPP_MODULE_02_FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed {
public:
	Fixed(void);
	Fixed(const Fixed &some_fx);
	Fixed(const float &some_float);
	Fixed(const int &some_int);

	~Fixed();

	void setRawBits( int const raw );
	int getRawBits( void ) const;

	Fixed &operator = (const Fixed &some_fx);
	Fixed const operator+(Fixed const& some_fx);
	Fixed const operator-(Fixed const& some_fx);
	Fixed const operator*(Fixed const& some_fx);
	Fixed const operator/(Fixed const& some_fx);

	bool operator<(Fixed const& some_fx) const;
	bool operator<=(Fixed const& some_fx) const;
	bool operator>(Fixed const& some_fx) const;
	bool operator>=(Fixed const& some_fx) const;
	bool operator==(Fixed const& some_fx) const;
	bool operator!=(Fixed const& some_fx) const;

	Fixed const operator++(void);
	Fixed const operator++(int);
	Fixed const operator--(void);
	Fixed const operator--(int);

	Fixed static min(Fixed a, Fixed b);
	Fixed static max(Fixed a, Fixed b);

	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int					rawBits;
	static const int	bits = 8;
};
	std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif //CPP_MODULE_02_FIXED_HPP
