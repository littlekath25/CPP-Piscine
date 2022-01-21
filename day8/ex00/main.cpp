/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 09:19:05 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/21 14:02:15 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int		main(void)
{
	int	MyArray[10];

	for (int i = 0; i < 10; i++)
		MyArray[i] = i;

	try
	{
		std::cout << EasyFind(MyArray, 2) << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << Exc.what() << std::endl;
	}
	
}
