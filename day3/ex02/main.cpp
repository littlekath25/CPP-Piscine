/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:07:16 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/04 14:55:25 by katherine     ########   odam.nl         */
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
	Frank.TakeDamage(14);
	Frank.BeRepaired(60);
	Frank.HighFivesGuys();
	std::cout << "-----------------------" << std::endl;

	return (0);
}