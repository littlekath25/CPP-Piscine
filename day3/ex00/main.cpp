/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:07:16 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:15:56 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap Bob;
	ClapTrap Frank("Frank");

	std::cout << "-----------------------" << std::endl;
	Bob.Attack("the teacher");
	Bob.TakeDamage(10);
	Bob.BeRepaired(6);
	std::cout << "-----------------------" << std::endl;
	Frank.Attack("the teacher");
	Frank.TakeDamage(14);
	Frank.BeRepaired(60);
	std::cout << "-----------------------" << std::endl;

	return (0);
}
