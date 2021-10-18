/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 16:53:42 by kfu           #+#    #+#                 */
/*   Updated: 2021/10/18 10:16:50 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		main()
{
	Phonebook phonebook;
	
	phonebook.i = 0;
	phonebook.size = 0;
	std::cout << "Welcome to my phonebook, please enter ADD, SEARCH or EXIT" << std::endl;
	for (std::string command; std::getline (std::cin, command);) {
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			AddContact(&phonebook);
		else if (command == "SEARCH")
			PrintBook(&phonebook);
		std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
	}

	return (0);
}
