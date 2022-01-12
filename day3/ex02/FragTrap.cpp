/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 12:21:06 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:34:31 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
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
	_AttackDamage = 100;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::HighFivesGuys(void)
{
	std::cout << "Give me a high five... plix.." << std::endl;
}
