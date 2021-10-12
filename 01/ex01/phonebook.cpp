/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 16:53:42 by kfu           #+#    #+#                 */
/*   Updated: 2021/10/11 20:11:47 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

class Contact {
	public:
		string	FirstName;
		string	LastName;
		string	NickName;
		int		Phone;
		string	Sercret;
};

static void	AddContact(int *i)
{
	if (*i == 9)
		*i = 0;
	std::cout << "I WILL ADD YOU" << *i << std::endl;
	*i += 1;
}

static void	PrintBook()
{
	std::cout << "I WILL SERACH YOU" << std::endl;
}

int		main()
{
	Contact phonebook[8];
	int		i;

	i = 0;
	for (std::string command; std::getline (std::cin, command);) {
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			AddContact(&i);
		else if (command == "SEARCH")
			PrintBook();
	}

	return (0);
}
