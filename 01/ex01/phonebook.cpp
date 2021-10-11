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

int		main()
{
	std::string name;

	std::cout << "Please enter name ";
	std::getline (std::cin, name);
	std::cout << "Hello " << name << "!" << std::endl;

	return (0);
}
