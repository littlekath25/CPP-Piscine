/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 12:51:17 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 17:55:48 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	this->_Name = "no name";
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "Diamond name constructor called." << std::endl;
	this->_Name = Name;
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &Copy)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = Copy;
}

DiamondTrap & DiamondTrap::operator= (const DiamondTrap &Copy)
{
	std::cout << "DiamondTrap assignation constructor called." << std::endl;
	if (this != &Copy)
	{
		this->_Name = Copy._Name;
		this->_HitPoints = Copy._HitPoints;
		this->_EnergyPoints = Copy._EnergyPoints;
		this->_AttackDamage = Copy._AttackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Diamond destructor called." << std::endl;
}

void	DiamondTrap::Attack(std::string const & Target)
{
	ScavTrap::Attack(Target);
}

void	DiamondTrap::WhoAmI(void)
{
	std::cout << "My own name is " << this->_Name << " - " << "My ClapTrap name is " << ClapTrap::_Name << std::endl;
}
