/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:33 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 18:54:39 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called." << std::endl;
	this->Type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &Copy) : WrongAnimal(Copy)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat & WrongCat::operator= (const WrongCat &Copy)
{
	std::cout << "WrongCat assignation constructor called." << std::endl;
	this->WrongAnimal::operator=(Copy);
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::MakeSound(void) const
{
	std::cout << "I am a wrong cat :)" << std::endl;
}
