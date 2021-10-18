/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 10:16:25 by katherine     #+#    #+#                 */
/*   Updated: 2021/10/18 12:20:39 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static	void IncrementContact(Phonebook *phonebook)
{
	if (phonebook->i == 7)
		phonebook->i = 0;
	else
		phonebook->i++;
	if (phonebook->size < 8)
		phonebook->size++;
}

void	AddContact(Phonebook *phonebook)
{
	Contact *current;

	std::cout << std::endl;
	current = &phonebook->contacts[phonebook->i];
	std::cout << "First name: ";
	std::getline (std::cin, current->FirstName);
	std::cout << "Last name: ";
	std::getline (std::cin, current->LastName);
	std::cout << "Nickname: ";
	std::getline (std::cin, current->NickName);
	std::cout << "Phone number: ";
	std::getline (std::cin, current->Phone);
	std::cout << "Darkest secret: ";
	std::getline (std::cin, current->Secret);
	IncrementContact(phonebook);
	std::cout << "You have been succesfully added" << std::endl;
	std::cout << std::endl;
}