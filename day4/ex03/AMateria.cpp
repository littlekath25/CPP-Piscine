/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 14:38:12 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:48:06 by katherine     ########   odam.nl         */
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
	this->Type = Copy.Type;
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
