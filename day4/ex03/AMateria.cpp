/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 14:38:12 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 15:47:59 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(const AMateria &Copy)
{
	std::cout << "AMateria copy constructor called." << std::endl;
	this->Type = Copy.Type;
}

AMateria::AMateria(std::string const &Type)
{
	std::cout << "AMateria copy constructor called." << std::endl;
	this->Type = Type;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called." << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->Type);
}