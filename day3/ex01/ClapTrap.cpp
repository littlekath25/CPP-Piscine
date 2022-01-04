/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:07:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/04 12:11:24 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

void ClapTrap::Attack(std::string const & Target)
{
	std::cout << "ClapTrap " << this->Name << " attacks " << Target << std::endl;
}

void ClapTrap::TakeDamage(unsigned int Amount)
{
	std::cout << "ClapTrap " << this->Name << " takes " << Amount << " points of damage!" << std::endl;
}

void ClapTrap::BeRepaired(unsigned int Amount)
{
	std::cout << "ClapTrap " << this->Name << " gets repaired for " << Amount << " points!" << std::endl;
}