/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:18:08 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 18:50:53 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &Copy)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = Copy;
}

WrongAnimal & WrongAnimal::operator= (const WrongAnimal &Copy)
{
	std::cout << "WrongAnimal assignation constructor called." << std::endl;
	this->Type = Copy.GetType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Animal destructor called." << std::endl;
}

std::string	WrongAnimal::GetType(void) const
{
	return (this->Type);
}

void	WrongAnimal::MakeSound(void) const
{
	std::cout << "I am a wrong animal :)" << std::endl;
}
