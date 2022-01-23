/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/23 12:57:25 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/23 15:39:20 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span sp = Span(6);
	sp.AddNumber(5);
	sp.AddNumber(3);
	sp.AddNumber(17);
	sp.AddNumber(9);
	sp.AddNumber(11);

	std::cout << sp.ShortestSpan() << std::endl;
	std::cout << sp.LongestSpan() << std::endl;

	std::cout << "----------------------" << std::endl;

	try
	{
		Span Bigsp = Span(10000);
		std::vector<int> Copy;
		for (int i = 0; i < 10000; i++) 
			Copy.push_back(i);

		Bigsp.AddNumber(Copy.begin(), Copy.end());
		std::cout << Bigsp.ShortestSpan() << std::endl;
		std::cout << Bigsp.LongestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------" << std::endl;
	try
	{
		Span Bigsp = Span(10000);
		std::vector<int> Copy;
		for (int i = 0; i < 10001; i++) 
			Copy.push_back(i);

		Bigsp.AddNumber(Copy.begin(), Copy.end());
		std::cout << Bigsp.ShortestSpan() << std::endl;
		std::cout << Bigsp.LongestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------" << std::endl;
	try
	{
		Span Bigsp = Span(1);
		Bigsp.AddNumber(1);

		std::cout << Bigsp.ShortestSpan() << std::endl;
		std::cout << Bigsp.LongestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
