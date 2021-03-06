/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/15 20:53:05 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/16 17:42:36 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int		main(int argc, char *argv[])
{
	Scalar Converter;

	if (argc == 2)
	{
		Converter.SetLiteral(argv[1]);
		std::cout << Converter;
	}
	else
		std::cout << "Please provide one argument" << std::endl;
	return (0);
}
