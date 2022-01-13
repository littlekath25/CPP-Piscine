/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:35:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 19:06:48 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	try {
		Bureaucrat Me("Katherine", 0);
		std::cout << Me << std::endl;
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try {
		Bureaucrat Me("Katherine", 300);
		std::cout << Me << std::endl;
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try {
		Bureaucrat Me("Katherine", 20);
		std::cout << Me << std::endl;
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try {
		Bureaucrat Me("Katherine", 1);
		Me.IncrementGrade(1);
		std::cout << Me << std::endl;
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try {
		Bureaucrat Me("Katherine", 100);
		Me.DecrementGrade(150);
		std::cout << Me << std::endl;
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try {
		Bureaucrat Me("Katherine", 100);
		Me.DecrementGrade(20);
		std::cout << Me << std::endl;
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
}
