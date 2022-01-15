/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:35:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 11:07:53 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	try {
		Bureaucrat Me("Katherine", 140);
		ShrubberyCreationForm Tree("garden");
		Me.SignForm(Tree);
		Me.IncrementGrade(20);
		Me.ExecuteForm(Tree);
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try {
		Bureaucrat Me("Katherine", 140);
		RobotomyRequestForm RoRo("wall-e");
		Me.SignForm(RoRo);
		Me.IncrementGrade(20);
		Me.ExecuteForm(RoRo);
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try {
		Bureaucrat Me("Katherine", 5);
		PresidentialPardonForm Obama("Katherine");
		Me.SignForm(Obama);
		Me.ExecuteForm(Obama);
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
}
