/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:18:08 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 18:52:55 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal &Copy)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = Copy;
}

Animal & Animal::operator= (const Animal &Copy)
{
	std::cout << "Animal assignation constructor called." << std::endl;
	this->Type = Copy.GetType();
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called." << std::endl;
}

std::string	Animal::GetType(void) const
{
	return (this->Type);
}

void	Animal::MakeSound(void) const
{
	std::cout << "Grrgrlrrlll.. I think?" << std::endl;
}
