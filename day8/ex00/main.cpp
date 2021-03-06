/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 09:19:05 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/21 18:28:08 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"
#include <vector>

int		main(void)
{
	std::vector<int>	MyArray;

	for (int i = 0; i < 10; i++)
		MyArray.push_back(i);

	try
	{
		std::cout << *EasyFind(MyArray, 2) << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << Exc.what() << std::endl;
	}
	
}
