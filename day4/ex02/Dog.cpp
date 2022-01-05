/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:38 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 13:01:50 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called." << std::endl;
	this->Type = "Dog";
	this->MyBrain = new Brain();
}

Dog::Dog(const Dog &Copy)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->Type = Copy.GetType();
	this->MyBrain = new Brain(*Copy.GetBrain());
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->MyBrain;
}

Brain * Dog::GetBrain(void) const
{
	return (this->MyBrain);
}

void Dog::MakeSound(void) const
{
	std::cout << "Woooooofff" << std::endl;
}