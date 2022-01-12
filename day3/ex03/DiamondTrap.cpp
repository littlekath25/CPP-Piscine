/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 12:51:17 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:36:37 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name)
{
	std::cout << "Diamond name constructor called." << std::endl;
	ClapTrap::_Name = Name + "_clap_name";
	this->_Name = Name;
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
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
	std::cout << "My own name is " << this->Name << " - " << "My ClapTrap name is " << ClapTrap::_Name << std::endl;
}
