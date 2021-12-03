/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/01 15:15:50 by kfu           #+#    #+#                 */
/*   Updated: 2021/12/03 16:44:57 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

#define ARRAY_SIZE(x) (int)((sizeof(x)) / (sizeof(x[0])))

bool	Karen::complain(std::string level)
{
	void	(Karen::*complaint[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
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

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}
