/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 12:51:17 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/04 14:57:11 by katherine     ########   odam.nl         */
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
	ClapTrap::Name = Name + "_clap_name";
	this->Name = Name;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
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
	std::cout << "My own name is " << this->Name << " - " << "My ClapTrap name is " << ClapTrap::Name << std::endl;
}
