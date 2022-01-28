/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 17:37:56 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 19:04:21 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->Ideas[i] = 'A';
}

Brain::Brain(const Brain &Copy)
{
		std::cout << "Brain copy constructor called." << std::endl;
		for (int i = 0; i < 100; i++)
			this->Ideas[i] = Copy.Ideas[i];
}

Brain & Brain::operator=(const Brain &Copy)
{
	std::cout << "Brain assignment constructor called." << std::endl;
	if (this != &Copy)
	{
		for (int i = 0; i < 100; i++)
			this->Ideas[i] = Copy.GetBrain(i);
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;
}

std::string Brain::GetBrain(int index) const
{
	return (this->Ideas[index]);
}
