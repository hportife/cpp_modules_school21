#include "Fixed.hpp"
//CONSTRUCTORS STAGE
Fixed::Fixed() : rawBits(0){ std::cout <<  "Default constructor called\n";}

Fixed::Fixed(const Fixed &some_fx)
{
	std::cout << "Copy constructor called\n";
	*(this) = some_fx;
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
	std::cout << "getRawBits member function called\n";
	return rawBits;
}

Fixed &Fixed::operator=(const Fixed &some_fx)
{
	std::cout << "Copy assignment operator called\n";
	this->rawBits = some_fx.getRawBits();
	return  *this;
}