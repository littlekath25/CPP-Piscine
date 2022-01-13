/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:35:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/13 22:15:42 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	try {
		Bureaucrat Me("Katherine", 20);
		RobotomyRequestForm RoRo("RahRah");
		Me.SignForm(RoRo);
		RoRo.Execute(Me);
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
}
