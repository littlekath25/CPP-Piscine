/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:18:08 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:46:32 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called." << std::endl;
}

std::string	Animal::GetType(void) const
{
	return (this->Type);
}
