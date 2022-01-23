/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:07:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/21 09:49:58 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("(no name)"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string NewName) : _Name(NewName), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
	std::cout << "Name constructor called." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called." << std::endl;
}

void ClapTrap::Attack(std::string const & Target)
{
	std::cout << "ClapTrap " << this->_Name << " attacks " << Target << std::endl;
}

void ClapTrap::TakeDamage(unsigned int Amount)
{
	if (this->_HitPoints - Amount <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << " dies!" << std::endl;
		this->_HitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->_Name << " takes " << Amount << " points of damage!" << std::endl;
		this->_HitPoints -= Amount;
	}
}

void ClapTrap::BeRepaired(unsigned int Amount)
{
	std::cout << "ClapTrap " << this->_Name << " gets repaired for " << Amount << " points!" << std::endl;
	this->_HitPoints += Amount;
}
