/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/01 15:15:50 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 18:07:16 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

#define ARRAY_SIZE(x) (int)((sizeof(x)) / (sizeof(x[0])))

bool	Karen::Complain(std::string level)
{
	void	(Karen::*complaint[])(void) = {
		&Karen::_Debug,
		&Karen::_Info,
		&Karen::_Warning,
		&Karen::_Error
	};
	
	std::string ComplaintLevels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < ARRAY_SIZE(ComplaintLevels); i++)
	{
		if (level == ComplaintLevels[i])
		{
			while (i < 4)
				(this->*complaint[i++])();
			return (true);
		}
	}
	return (false);
}

void	Karen::_Debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void	Karen::_Info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void	Karen::_Warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Karen::_Error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}
