/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:07:16 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 17:11:22 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap Bob;
	FragTrap Frank("Frank");

	std::cout << "-----------------------" << std::endl;
	Bob.Attack("the teacher");
	Bob.TakeDamage(10);
	Bob.BeRepaired(6);
	Bob.HighFivesGuys();
	std::cout << "-----------------------" << std::endl;
	Frank.Attack("the teacher");
	Frank.TakeDamage(40);
	Frank.BeRepaired(40);
	Frank.HighFivesGuys();
	Frank.TakeDamage(100);
	std::cout << "-----------------------" << std::endl;

	return (0);
}
