/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 15:34:06 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/08 12:52:45 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	this->Type = "cure";
}

Cure::Cure(const Cure &Copy) : AMateria(Copy)
{
	this->Type = "cure";
}

Cure::~Cure(void)
{
}

AMateria * Cure::Clone(void) const
{
	return (new Cure(*this));
}

void	Cure::Use(ICharacter &Target)
{
	std::cout << "* heals " << Target.GetName() << "'s wounds *" << std::endl;
}
