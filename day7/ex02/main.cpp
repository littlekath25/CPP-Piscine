/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:25:22 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/20 20:42:28 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<std::string> CharArr(5);

	for (int i = 0; i < 5; i++)
	{
		CharArr[i] = std::string("Arr: " + std::to_string(i));
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << CharArr[i] << std::endl;
	}

	std::cout << "---------------------------------" << std::endl;
	Array<std::string> CharArr2;

	CharArr2 = CharArr;

	for (int i = 0; i < 5; i++)
	{
		std::cout << CharArr2[i] << std::endl;
	}
	return (0);
}
