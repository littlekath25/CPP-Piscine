/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:35:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 13:39:06 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern someRandomIntern;
	Form* robot;
	robot = someRandomIntern.MakeForm("Robotomy Request", "Wall-E");
	robot = someRandomIntern.MakeForm("Shrubbery Creation", "Treehlover");
	robot = someRandomIntern.MakeForm("Presidential Pardon", "Obama");

	return (0);
}
