/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:16:35 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/04 15:50:45 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int		main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->GetType() << " " << std::endl;
	std::cout << i->GetType() << " " << std::endl;
	i->MakeSound(); // will output cat sound
	j->MakeSound(); // will output dog sound
	meta->MakeSound(); // will output who knows
	return (0);
}