/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:04 by kfu           #+#    #+#                 */
/*   Updated: 2021/11/19 16:11:37 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	std::string	name;
	Zombie 		*ZombieHorde;
	int			total = 0;

	std::cout << "🧟 Enter a name and see what happens... 🧟‍" << std::endl;
	std::getline (std::cin, name);
	std::cout << "🧟 How many zombies do you want to summon... 🧟‍" << std::endl;
	std::cin >> total;
	ZombieHorde = zombieHorde(total, name);
	delete[] ZombieHorde;
	return (0);
}
