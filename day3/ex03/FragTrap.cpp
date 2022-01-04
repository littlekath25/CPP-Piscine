/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 12:21:06 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/04 14:22:24 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called." << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::HighFivesGuys(void)
{
	std::cout << "Give me a high five... plix.." << std::endl;
}