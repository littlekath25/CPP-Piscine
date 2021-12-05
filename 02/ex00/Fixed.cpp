/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 11:49:47 by katherine     #+#    #+#                 */
/*   Updated: 2021/12/05 12:53:51 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _Fixed(0) {
	std::cout << "Default constructor called." << std::endl << std::endl;
};

Fixed::Fixed(const Fixed &Copy) : _Fixed(Copy.getRawBits()){
	std::cout << "Copy constructor called." << std::endl << std::endl;
};

Fixed::~Fixed(void) {
	std::cout << "Destructor called." << std::endl << std::endl;
};

Fixed & Fixed::operator= (Fixed &Copy)
{
	std::cout << "Assignation operator called." << std::endl << std::endl;
	if (this == &Copy)
		return (*this);
	this->_Fixed = Copy.getRawBits();
	return (*this);
};

int		Fixed::getRawBits(void) const
{
	std::cout << "Get raw bits." << std::endl << std::endl;
	return (this->_Fixed);
};

void		Fixed::setRawBits(int const raw)
{
	std::cout << "Set raw bits." << std::endl << std::endl;
	this->_Fixed = raw;
};
