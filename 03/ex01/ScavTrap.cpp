/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:35:53 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/03 21:58:49 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << " has entered Gate Keeper mode." << std::endl;
}