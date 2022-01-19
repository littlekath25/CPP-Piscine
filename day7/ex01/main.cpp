/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:25:22 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/19 16:04:07 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int	main(void)
{
	int IntArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int IntSize = 10;

	char CharArray[5] = {'a', 'b', 'c', 'd', 'e'};
	int CharSize = 5;

	float FloatArray[3] = {10.2f, 11.2f, 13.2f};
	int FloatSize = 3;

	Iter(IntArray, IntSize, IncrementAndPrint<int>);
	std::cout << "------------------------" << std::endl;
	Iter(CharArray, CharSize, IncrementAndPrint<char>);
	std::cout << "------------------------" << std::endl;
	Iter(FloatArray, FloatSize, IncrementAndPrint<float>);
}
