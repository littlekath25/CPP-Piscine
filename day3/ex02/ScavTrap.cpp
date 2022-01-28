/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:35:53 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 17:52:15 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
	std::cout << "ScavTrap name constructor called." << std::endl;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}


ScavTrap::ScavTrap(const ScavTrap &Copy)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = Copy;
}

ScavTrap & ScavTrap::operator= (const ScavTrap &Copy)
{
	std::cout << "ScavTrap assignation constructor called." << std::endl;
	if (this != &Copy)
	{
		this->_Name = Copy._Name;
		this->_HitPoints = Copy._HitPoints;
		this->_EnergyPoints = Copy._EnergyPoints;
		this->_AttackDamage = Copy._AttackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::GuardGate(void)
{
	std::cout << "ScavTrap enters Guard Keep mode." << std::endl;
}

void ScavTrap::Attack(std::string const & Target)
{
	if (this->_HitPoints == 0 || this->_EnergyPoints == 0)
		std::cout << "ScavTrap is dead, can't do anything" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_Name << " attacks " << Target << ", causing " << this->_AttackDamage << " points of damage."  << std::endl;
		this->_EnergyPoints--;
	}
}
