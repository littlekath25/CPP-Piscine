/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 15:34:06 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 19:14:38 by kfu           ########   odam.nl         */
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

Ice & Ice::operator= (const Ice &Copy)
{
	this->AMateria::operator=(Copy);
	return (*this);
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
