/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/26 16:47:41 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/26 16:47:41 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : _value(copy.getRawBits())
{
	std::cout << "Copy Constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _value(value << _fractionalBits)
{
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fractionalBits)))
{
	std::cout << "Float Constructor called" << std::endl;
}

float Fixed::toFloat() const
{
	return static_cast<float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt() const
{
	return _value >> _fractionalBits;
}

Fixed &Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &assign)
		_value = assign.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, Fixed const &i)
{
	os << i.toFloat();
	return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

bool Fixed::operator>(Fixed const &fx) const
{
	return (this->getRawBits() > fx.getRawBits());
}

bool Fixed::operator<(Fixed const &fx) const
{
	return (this->getRawBits() < fx.getRawBits());
}

bool Fixed::operator>=(Fixed const &fx) const
{
	return (this->getRawBits() >= fx.getRawBits());
}

bool Fixed::operator<=(Fixed const &fx) const
{
	return (this->getRawBits() <= fx.getRawBits());
}

bool Fixed::operator==(Fixed const &fx) const
{
	return (this->getRawBits() == fx.getRawBits());
}

bool Fixed::operator!=(Fixed const &fx) const
{
	return (this->getRawBits() != fx.getRawBits());
}

Fixed Fixed::operator+(Fixed const &fx) const
{
	return Fixed(this->toFloat() + fx.toFloat());
}

Fixed Fixed::operator-(Fixed const &fx) const
{
	return Fixed(this->toFloat() - fx.toFloat());
}

Fixed Fixed::operator*(Fixed const &fx) const
{
	return Fixed(this->toFloat() * fx.toFloat());
}

Fixed Fixed::operator/(Fixed const &fx) const
{
	return Fixed(this->toFloat() / fx.toFloat());
}

Fixed &Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed &Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed &Fixed::min(Fixed &fx1, Fixed &fx2)
{
	return (fx1.getRawBits() < fx2.getRawBits() ? fx1 : fx2);
}

Fixed &Fixed::max(Fixed &fx1, Fixed &fx2)
{
	return (fx1.getRawBits() > fx2.getRawBits() ? fx1 : fx2);
}

const Fixed &Fixed::min(const Fixed &fx1, const Fixed &fx2)
{
	return (fx1.getRawBits() < fx2.getRawBits() ? fx1 : fx2);
}

const Fixed &Fixed::max(const Fixed &fx1, const Fixed &fx2)
{
	return (fx1.getRawBits() > fx2.getRawBits() ? fx1 : fx2);
}
