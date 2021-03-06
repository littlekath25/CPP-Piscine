/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 11:49:47 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:11:02 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _Fixed(0) {
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &Copy) {
	std::cout << "Copy constructor called." << std::endl;
	this->_Fixed = Copy.GetRawBits();
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called." << std::endl;
}

Fixed & Fixed::operator= (Fixed &Copy)
{
	std::cout << "Assignation operator called." << std::endl;
	if (this == &Copy)
		return (*this);
	this->_Fixed = Copy.GetRawBits();
	return (*this);
}

int		Fixed::GetRawBits(void) const
{
	std::cout << "Get raw bits." << std::endl;
	return (this->_Fixed);
}

void		Fixed::SetRawBits(int const raw)
{
	std::cout << "Set raw bits." << std::endl;
	this->_Fixed = raw;
}
