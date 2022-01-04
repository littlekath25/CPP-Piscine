/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 09:28:02 by katherine     #+#    #+#                 */
/*   Updated: 2021/11/13 12:09:06 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>

class Contact {
	public:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	Phone;
		std::string	Secret;
};

class Phonebook {
    public:
        int i;
        int size;
        Contact contacts[8];
};

void	AddContact(Phonebook *phonebook);
void	PrintBook(Phonebook *phonebook);

#endif