/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 10:17:11 by katherine     #+#    #+#                 */
/*   Updated: 2021/10/18 13:03:15 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static int	CheckIndex(string str)
{
	for (size_t i = 0; i < str.length() ; i++)
	{
		if (std::isdigit(str[i]) == 0)
			return (0);
	}
	return (1);
}

static void		PrintIndivual(Phonebook *phonebook, int index)
{
	Contact	*current;

	current = &phonebook->contacts[index];
	std::cout << std::endl;
	std::cout << "-------- Contact information --------" << std::endl;
	std::cout << "First name: " << current->FirstName << std::endl;
	std::cout << "Last name: " << current->LastName << std::endl;
	std::cout << "Nickname: " << current->NickName << std::endl;
	std::cout << "Phone: " << current->Phone << std::endl;
	std::cout << "Darkest secret: " << current->Secret << std::endl;
	std::cout << "---------------- End ----------------" << std::endl;
	std::cout << std::endl;
}

static void    SearchIndivual(Phonebook *phonebook)
{
	string	tmp;
	int		index;

	std::cout << "Index for further inspection: ";
	std::getline (std::cin, tmp);
	if (tmp.length() < 12 && CheckIndex(tmp))
	{
		std::istringstream(tmp) >> index;
		if (index >= 0 && index < phonebook->size)
		{
			PrintIndivual(phonebook, index);
			return ;
		}
	}
	std::cout << std::endl;
	std::cout << "Index not found" << std::endl;
	std::cout << std::endl;
}

static void	PrintSingleContact(Contact *current)
{
	if (current->FirstName.length() <= 10)
		std::cout << setw(10) << current->FirstName << "|";
	else
		std::cout << current->FirstName.substr(0, 9) + "." << "|";
	if (current->LastName.length() <= 10)
		std::cout << setw(10) << current->LastName << "|";
	else
		std::cout << current->LastName.substr(0, 9) + "." << "|";
	if (current->NickName.length() <= 10)
		std::cout << setw(10) << current->NickName << std::endl;
	else
		std::cout << current->NickName.substr(0, 9) + "." << std::endl;
}

void	PrintBook(Phonebook *phonebook)
{
	Contact	*current;
	std::cout << std::endl;
	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
	for (int i = 0; i < phonebook->size; i++)
	{
		current = &phonebook->contacts[i];
		std::cout << setw(10) << i << "|";
		PrintSingleContact(current);
	}
	std::cout << std::endl;
	SearchIndivual(phonebook);
}