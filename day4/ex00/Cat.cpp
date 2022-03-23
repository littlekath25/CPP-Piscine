/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:33 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 18:49:49 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called." << std::endl;
	this->Type = "Cat";
}

Cat::Cat(const Cat &Copy) : Animal(Copy) {
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat & Cat::operator= (const Cat &Copy)
{
	std::cout << "Cat assignation constructor called." << std::endl;
	this->Animal::operator=(Copy);
	return (*this);
}
		
Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::MakeSound(void) const
{
	std::cout << "Miaaaauwww" << std::endl;
}
