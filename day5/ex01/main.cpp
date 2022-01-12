/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:35:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 23:08:48 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	try {
		Bureaucrat Me("Katherine", 5);
		Form Codam("Codam", 6, 6);
		Me.SignForm(Codam);
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
	try {
		Bureaucrat Me("Katherine", 10);
		Form Codam("Codam", 6, 6);
		Me.SignForm(Codam);
	}
	catch (std::exception &Exc) {
		std::cout << Exc.what() << std::endl;
	}
}
