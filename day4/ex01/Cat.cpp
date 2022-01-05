/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:33 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 13:09:12 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called." << std::endl;
	this->Type = "Cat";
	this->MyBrain = new Brain();
}

Cat::Cat(const Cat &Copy) 
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->Type = Copy.GetType();
	this->MyBrain = new Brain(*Copy.GetBrain());
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->MyBrain;
}

Brain * Cat::GetBrain(void) const
{
	return (this->MyBrain);
}

void Cat::MakeSound(void) const
{
	std::cout << "Miaaaauwww" << std::endl;
}