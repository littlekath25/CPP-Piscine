/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:16:35 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 13:10:37 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal* Animals[4];

	std::cout << "--------- ARRAY ---------" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}
	
	std::cout << "--------- DELETE ---------" << std::endl;
	for (int i = 0; i < 4; ++i)
		delete Animals[i];

	// system("leaks animal");
	return (0);
}