/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/13 19:05:30 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 10:56:13 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : Form("Shrubbery Creation", Target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &Copy) : Form(Copy) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &Copy)
{
	this->Form::operator=(Copy);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::Action(Bureaucrat const & Executor) const
{
	std::ofstream MyFile;
	std::string FileName = this->GetTarget() + "_shrubbery";

	Form::Execute(Executor);
	MyFile.open(FileName);
	if (MyFile.is_open() == false)
		std::cout << "Couldn't open this file" << std::endl;
	MyFile << SHRUBBERY_TREE;
	MyFile.close();
	std::cout << "Shrubbery Creation succesfully executed" << std::endl;
}
