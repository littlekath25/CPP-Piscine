/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/15 20:53:05 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/15 22:03:00 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int		main(int argc, char *argv[])
{
	Scalar Converter;

	if (argc == 2)
	{
		Converter.SetTarget(argv[1]);
		std::cout << Converter;
	}
	else
		std::cout << "Please provide one argument" << std::endl;
	return (0);
}
