/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:38 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 18:50:03 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called." << std::endl;
	this->Type = "Dog";
}

Dog::Dog(const Dog &Copy) : Animal(Copy) {
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog & Dog::operator= (const Dog &Copy)
{
	std::cout << "Dog assignation constructor called." << std::endl;
	this->Animal::operator=(Copy);
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::MakeSound(void) const
{
	std::cout << "Woooooofff" << std::endl;
}
