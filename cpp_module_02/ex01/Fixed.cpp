#include "Fixed.hpp"
//CONSTRUCTORS STAGE
Fixed::Fixed() : rawBits(0)
{
	std::cout <<  "Default constructor called\n";
}

Fixed::Fixed(const Fixed &some_fx)
{
	std::cout << "Copy constructor called\n";
	*(this) = some_fx;
}

Fixed::Fixed(const int &some_int)
{
	std::cout << "Int constructor called\n";
	this->rawBits = some_int << bits;
}

Fixed::Fixed(const float &some_float)
{
	std::cout << "Float constructor called\n";
	this->rawBits = roundf(some_float * (pow(2, bits)));
}



//DESTRUCTORS STAGE
Fixed::~Fixed() { std::cout << "Destructor called\n"; }



//SETTERS/GETTERS STAGE
void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
	this->rawBits = raw;
}

int Fixed::getRawBits() const
{
//	std::cout << "getRawBits member function called\n";
	return rawBits;
}



//OPERATORS OVERLOADS STAGE
Fixed &Fixed::operator=(const Fixed &some_fx)
{
	std::cout << "Copy assignment operator called\n";
	this->rawBits = some_fx.getRawBits();
	return  *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}



//WORK METHODS STAGE
int Fixed::toInt( void ) const {
//	std::cout << "Convert to Int\n";
	return rawBits >> bits;
}

float Fixed::toFloat( void ) const {
//	std::cout << "Convert to Float\n";
	return static_cast<float>(rawBits) / pow(2, bits);
}