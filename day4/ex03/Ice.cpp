/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 15:34:06 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 18:53:27 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(const Ice &Copy) : AMateria(Copy)
{
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called." << std::endl;
}

AMateria * Ice::Clone(void) const
{
	return (new Ice(*this));
}

void	Ice::Use(ICharacter &Target)
{
	std::cout << "* shoots an ice bolt at " << Target.GetName() << " *" << std::endl;
}
