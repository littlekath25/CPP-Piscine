/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 09:28:02 by katherine     #+#    #+#                 */
/*   Updated: 2021/10/18 13:04:08 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>

using namespace std;

class Contact {
	public:
		string	FirstName;
		string	LastName;
		string	NickName;
		string	Phone;
		string	Secret;
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