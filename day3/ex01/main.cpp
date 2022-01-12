/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:07:16 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:18:45 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap Bob;
	ScavTrap Frank("Frank");

	std::cout << "-----------------------" << std::endl;
	Bob.Attack("the teacher");
	Bob.TakeDamage(10);
	Bob.BeRepaired(6);
	Bob.GuardGate();
	std::cout << "-----------------------" << std::endl;
	Frank.Attack("the teacher");
	Frank.TakeDamage(14);
	Frank.BeRepaired(60);
	Frank.GuardGate();
	std::cout << "-----------------------" << std::endl;

	return (0);
}
