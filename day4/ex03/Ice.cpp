/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 15:34:06 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/08 12:52:29 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	this->Type = "ice";
}

Ice::Ice(const Ice &Copy) : AMateria(Copy)
{
	this->Type = "ice";
}

Ice::~Ice(void)
{
}

AMateria * Ice::Clone(void) const
{
	return (new Ice(*this));
}

void	Ice::Use(ICharacter &Target)
{
	std::cout << "* shoots an ice bolt at " << Target.GetName() << " *" << std::endl;
}
