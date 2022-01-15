/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:33 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:43:18 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called." << std::endl;
	this->Type = "Cat";
	this->_MyBrain = new Brain();
}

Cat::Cat(const Cat &Copy) 
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->Type = Copy.GetType();
	this->_MyBrain = new Brain(*Copy.GetBrain());
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->_MyBrain;
}

Brain * Cat::GetBrain(void) const
{
	return (this->_MyBrain);
}

void Cat::MakeSound(void) const
{
	std::cout << "Miaaaauwww" << std::endl;
}
