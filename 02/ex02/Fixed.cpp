/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 11:49:47 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/03 13:46:41 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _Fixed(0) {
	std::cout << "Default constructor called." << std::endl;
	this->_Fixed = 0;
}

Fixed::Fixed(const int Fixed) {
	std::cout << "Int constructor called." << std::endl;
	this->_Fixed = Fixed << this->_Frac;
}

Fixed::Fixed(const float Float) {
	std::cout << "Float constructor called." << std::endl;
	this->_Fixed = (int)(roundf(Float * (1 << this->_Frac)));
}

Fixed::Fixed(Fixed const &Copy) {
	std::cout << "Copy constructor called." << std::endl;
	this->_Fixed = Copy.getRawBits();
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called." << std::endl;
}

Fixed & Fixed::operator = (const Fixed &Copy)
{
	std::cout << "Assignation operator called." << std::endl;
	if (this == &Copy)
		return (*this);
	this->_Fixed = Copy.getRawBits();
	return (*this);
}

Fixed & Fixed::operator = (const Fixed &Copy)
{
	
}

std::ostream & operator << (std::ostream &Output, const Fixed &Copy)
{
	Output << Copy.toFloat();
	return (Output);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "Get raw bits." << std::endl;
	return (this->_Fixed);
}

void		Fixed::setRawBits(int const raw)
{
	std::cout << "Set raw bits." << std::endl;
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
