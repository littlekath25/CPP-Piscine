/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 15:34:06 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 18:53:08 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::Cure(const Cure &Copy) : AMateria(Copy)
{
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called." << std::endl;
}

AMateria * Cure::Clone(void) const
{
	return (new Cure(*this));
}

void	Cure::Use(ICharacter &Target)
{
	std::cout << "* heals " << Target.GetName() << "'s wounds *" << std::endl;
}
