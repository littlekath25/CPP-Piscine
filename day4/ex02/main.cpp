/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:16:35 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 14:10:57 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal* Animals = new Animal();
	Animal WeirdAnimal;
	Dog	Doggo;

	Doggo.MakeSound();
	// system("leaks animal");
	return (0);
}