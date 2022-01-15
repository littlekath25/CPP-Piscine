/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/14 11:09:39 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 15:48:20 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern & Intern::operator= (const Intern &Copy)
{
	if (this != &Copy)
		return (*this);
	return (*this);
}

Form * Intern::CreateShrubberyForm(std::string Target)
{
	return (new ShrubberyCreationForm(Target));
}

Form * Intern::CreateRobotomyForm(std::string Target)
{
	return (new RobotomyRequestForm(Target));
}

Form * Intern::CreatePresidentialForm(std::string Target)
{
	return (new PresidentialPardonForm(Target));
}

Form * Intern::MakeForm(std::string Name, std::string Target)
{	
	std::string FormNames[3] = {
		"Robotomy Request",
		"Shrubbery Creation",
		"Presidential Pardon"
	};

	GenerateForm Forms[3] = {
		&Intern::CreateShrubberyForm,
		&Intern::CreateRobotomyForm,
		&Intern::CreatePresidentialForm
	};

	for (int i = 0; i < 3; ++i)
	{
		if (Name == FormNames[i])
		{
			std::cout << "Intern creates " << Name << "form." << std::endl;
			return ((this->*Forms[i])(Target));
		}
	}
	throw Intern::FormNotFound();
}
