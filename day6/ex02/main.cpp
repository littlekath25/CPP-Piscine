/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/16 20:21:41 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/16 20:41:06 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *Generate(void)
{
	switch (rand() % 3)
	{
		case (0):
			return (new A);
		case (1):
			return (new B);
		case (2):
			return (new C);
		default:
			return (NULL);
	}
}

void Identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void Identify(Base &p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
}

int		main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 5; ++i)
	{
		Base *Ptr = Generate();
		Identify(Ptr);
		Identify(*Ptr);
		std::cout << "----------------" << std::endl;
	}
	return (0);
}
