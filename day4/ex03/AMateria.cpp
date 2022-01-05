/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 14:38:12 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 18:51:54 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &Type)
{
	std::cout << "AMateria copy constructor called." << std::endl;
	this->Type = Type;
}

AMateria::AMateria(const AMateria &Copy)
{
	std::cout << "AMateria copy constructor called." << std::endl;
	this->Type = Copy.Type;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called." << std::endl;
}

std::string const & AMateria::GetType() const
{
	return (this->Type);
}

void AMateria::Use(ICharacter &Target)
{
	std::cout << "AMateria: " << Target.GetName() << std::endl;
}