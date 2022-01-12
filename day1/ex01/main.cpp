/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:04 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 16:38:55 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	std::string	name;
	Zombie 		*Horde;
	int			total = 0;

	std::cout << "🧟 Enter a name and see what happens... 🧟‍" << std::endl;
	std::getline (std::cin, name);
	std::cout << "🧟 How many zombies do you want to summon... 🧟‍" << std::endl;
	std::cin >> total;
	Horde = ZombieHorde(total, name);
	delete[] Horde;
	return (0);
}
