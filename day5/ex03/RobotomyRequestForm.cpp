/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/13 19:05:30 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 13:13:08 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("Robotomy Request", Target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &Copy) : Form(Copy) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &Copy)
{
	this->Form::operator=(Copy);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::Action(Bureaucrat const & Executor) const
{
	Form::Execute(Executor);
	std::cout << "Brrrddrrlllll...... drrrlllll" << std::endl;
	srand(time(NULL));
	if ((rand() % 2) ==  1)
		std::cout << this->GetTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->GetTarget() << " has failed to robotomized." << std::endl;

}
