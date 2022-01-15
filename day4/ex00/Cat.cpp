/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:33 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:39:30 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called." << std::endl;
	this->Type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::MakeSound(void) const
{
	std::cout << "Miaaaauwww" << std::endl;
}
