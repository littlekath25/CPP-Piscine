/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:04 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 16:35:11 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	std::string	name;
	std::cout << "🧟 Enter a name and see what happens... 🧟‍" << std::endl;
	std::getline (std::cin, name);
	RandomChump(name);
	return (0);
}
