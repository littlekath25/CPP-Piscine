/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 11:49:47 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/03 14:09:33 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS

Fixed::Fixed() : _Fixed(0) {
	this->_Fixed = 0;
}

Fixed::Fixed(const int Fixed) {
	this->_Fixed = Fixed << this->_Frac;
}

Fixed::Fixed(const float Float) {
	this->_Fixed = (int)(roundf(Float * (1 << this->_Frac)));
}

Fixed::Fixed(Fixed const &Copy) {
	this->_Fixed = Copy.getRawBits();
}

// DESTRUCTORS

Fixed::~Fixed(void) {
}

// ARITHMETIC OVERLOADING

Fixed & Fixed::operator = (const Fixed &Copy)
{
	if (this == &Copy)
		return (*this);
	this->_Fixed = Copy.getRawBits();
	return (*this);
}

Fixed Fixed::operator + (const Fixed &Copy) const
{
	Fixed tmp;
	
	tmp.setRawBits(this->_Fixed + Copy.getRawBits());
	return (tmp);
}

Fixed Fixed::operator - (const Fixed &Copy) const
{
	Fixed tmp;
	
	tmp.setRawBits(this->_Fixed - Copy.getRawBits());
	return (tmp);
}

Fixed Fixed::operator * (const Fixed &Copy) const
{
	Fixed tmp;
	
	tmp.setRawBits(this->_Fixed * (Copy.getRawBits() >> this->_Frac));
	return (tmp);
}

Fixed Fixed::operator / (const Fixed &Copy) const
{
	Fixed tmp;
	
	tmp.setRawBits((this->_Fixed << this->_Frac) / Copy.getRawBits());
	return (tmp);
}

// INCREMENT AND DECREMENT

Fixed & Fixed::operator ++ (void)
{
	this->_Fixed++;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed & Fixed::operator -- (void)
{
	this->_Fixed--;
	return (*this);
}

Fixed Fixed::operator -- (int)
{
	Fixed tmp(*this);
    operator--();
    return (tmp);
}
// COMPARISON OVERLOADING

bool Fixed::operator > (const Fixed &Copy) const
{
	return (this->getRawBits() > Copy.getRawBits());
}

bool Fixed::operator < (const Fixed &Copy) const
{
	return (this->getRawBits() < Copy.getRawBits());
}

bool Fixed::operator >= (const Fixed &Copy) const
{
	return (this->getRawBits() >= Copy.getRawBits());
}

bool Fixed::operator <= (const Fixed &Copy) const
{
	return (this->getRawBits() <= Copy.getRawBits());
}

bool Fixed::operator == (const Fixed &Copy) const
{
	return (this->getRawBits() == Copy.getRawBits());
}

bool Fixed::operator != (const Fixed &Copy) const
{
	return (this->getRawBits() != Copy.getRawBits());
}

// OUTPUT OVERLOADING

std::ostream & operator << (std::ostream &Output, const Fixed &Copy)
{
	Output << Copy.toFloat();
	return (Output);
}

// FUNCTIONS

int		Fixed::getRawBits(void) const
{
	return (this->_Fixed);
}

void		Fixed::setRawBits(int const raw)
{
	this->_Fixed = raw;
}

float		Fixed::toFloat(void) const
{
	return ((float)this->_Fixed / (float)(1 << this->_Frac));
}

int			Fixed::toInt(void) const
{
	return ((int)(this->_Fixed >> this->_Frac));
}

// MIN AND MAX

Fixed & Fixed::min(Fixed &First, Fixed &Second)
{
	return (First < Second ? First : Second);
}

Fixed & Fixed::max(Fixed &First, Fixed &Second)
{
	return (First > Second ? First : Second);
}

const Fixed & Fixed::min(const Fixed &First, const Fixed &Second)
{
	return (First < Second ? First : Second);
}

const Fixed & Fixed::max(const Fixed &First, const Fixed &Second)
{
	return (First > Second ? First : Second);
}
