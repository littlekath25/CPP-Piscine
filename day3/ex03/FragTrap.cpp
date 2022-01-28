/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 12:21:06 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 17:53:41 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called." << std::endl;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) 
{
	std::cout << "FragTrap name constructor called." << std::endl;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &Copy)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = Copy;
}

FragTrap & FragTrap::operator= (const FragTrap &Copy)
{
	std::cout << "FragTrap assignation constructor called." << std::endl;
	if (this != &Copy)
	{
		this->_Name = Copy._Name;
		this->_HitPoints = Copy._HitPoints;
		this->_EnergyPoints = Copy._EnergyPoints;
		this->_AttackDamage = Copy._AttackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::HighFivesGuys(void)
{
	std::cout << "Give me a high five... plix.." << std::endl;
}

void FragTrap::Attack(std::string const & Target)
{
	if (this->_HitPoints == 0 || this->_EnergyPoints == 0)
		std::cout << "FragTrap is dead, can't do anything" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->_Name << " attacks " << Target << ", causing " << this->_AttackDamage << " points of damage."  << std::endl;
		this->_EnergyPoints--;
	}
}
