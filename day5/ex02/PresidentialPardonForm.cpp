/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/13 19:05:30 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 10:56:04 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : Form("Presidential Pardon", Target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &Copy) : Form(Copy) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &Copy)
{
	this->Form::operator=(Copy);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::Action(Bureaucrat const & Executor) const
{
	Form::Execute(Executor);
	std::cout << this->GetTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
