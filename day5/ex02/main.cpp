/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:35:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/13 22:01:49 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	try {
		Bureaucrat Me("Katherine", 130);
		ShrubberyCreationForm Tree("garden");
		Me.SignForm(Tree);
		Tree.Execute(Me);
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
	try {
		Bureaucrat Me("Katherine", 10);
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
}
