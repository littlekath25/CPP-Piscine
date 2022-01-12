/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:07:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:16:36 by katherine     ########   odam.nl         */
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
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

void ClapTrap::Attack(std::string const & Target)
{
	std::cout << "ClapTrap " << this->_Name << " attacks " << Target << std::endl;
}

void ClapTrap::TakeDamage(unsigned int Amount)
{
	std::cout << "ClapTrap " << this->_Name << " takes " << Amount << " points of damage!" << std::endl;
}

void ClapTrap::BeRepaired(unsigned int Amount)
{
	std::cout << "ClapTrap " << this->_Name << " gets repaired for " << Amount << " points!" << std::endl;
}
