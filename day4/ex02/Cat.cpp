/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:33 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 19:02:04 by kfu           ########   odam.nl         */
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

Cat & Cat::operator= (const Cat &Copy)
{
	std::cout << "Cat assignation constructor called." << std::endl;
	this->Animal::operator=(Copy);
	return (*this);
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
