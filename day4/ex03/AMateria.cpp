/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 14:38:12 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 19:14:23 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const &Type)
{
	this->Type = Type;
}

AMateria::AMateria(const AMateria &Copy)
{
	this->Type = Copy.GetType();
}

AMateria & AMateria::operator=(const AMateria &Copy)
{
	this->Type = Copy.GetType();
	return (*this);
}

AMateria::~AMateria(void)
{
}

std::string const & AMateria::GetType() const
{
	return (this->Type);
}

void AMateria::Use(ICharacter &Target)
{
	std::cout << "AMateria: " << Target.GetName() << std::endl;
}
