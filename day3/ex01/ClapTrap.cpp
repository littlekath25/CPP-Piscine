/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:07:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 17:51:30 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("(no name)"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string NewName) : _Name(NewName), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
	std::cout << "Name constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &Copy)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = Copy;
}

ClapTrap & ClapTrap::operator= (const ClapTrap &Copy)
{
	std::cout << "ClapTrap assignation constructor called." << std::endl;
	if (this != &Copy)
	{
		this->_Name = Copy._Name;
		this->_HitPoints = Copy._HitPoints;
		this->_EnergyPoints = Copy._EnergyPoints;
		this->_AttackDamage = Copy._AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called." << std::endl;
}

void ClapTrap::Attack(std::string const & Target)
{
	if (this->_HitPoints == 0 || this->_EnergyPoints == 0)
		std::cout << "ClapTrap is dead, can't do anything" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_Name << " attacks " << Target << ", causing " << this->_AttackDamage << " points of damage."  << std::endl;
		this->_EnergyPoints--;
	}
}

void ClapTrap::TakeDamage(unsigned int Amount)
{
	if (this->_HitPoints == 0)
		std::cout << "ClapTrap is dead, can't do anything" << std::endl;
	else if (this->_HitPoints - (int)Amount <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << " dies!" << std::endl;
		this->_HitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->_Name << " takes " << Amount << " points of damage!" << std::endl;
		this->_HitPoints -= (int)Amount;
	}
}

void ClapTrap::BeRepaired(unsigned int Amount)
{
	if (this->_HitPoints == 0 || this->_EnergyPoints == 0)
		std::cout << "ClapTrap is dead, can't do anything" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_Name << " gets repaired for " << Amount << " points!" << std::endl;
		this->_HitPoints += Amount;
		this->_EnergyPoints--;
	}
}
