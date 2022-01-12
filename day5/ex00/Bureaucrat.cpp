/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:36:35 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 13:58:07 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string NewName, int NewGrade) : Name(NewName)
{
	if (NewGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (NewGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->Grade = NewGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Copy) : Name(Copy.Name)
{
	this->Grade = Copy.Grade;
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat &Copy)
{
	if (this != &Copy)
		this->Grade = Copy.Grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string	Bureaucrat::GetName(void) const
{
	return (this->Name);
}

int	Bureaucrat::GetGrade(void) const
{
	return (this->Grade);
}

void	Bureaucrat::IncrementGrade(int Amount)
{
	std::cout << "Increment grade to " << this->GetGrade() << std::endl;
	try
	{
		this->Grade -= Amount;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::DecrementGrade(int Amount)
{
	std::cout << "Decrement grade to " << this->GetGrade() << std::endl;
	try
	{
		this->Grade += Amount;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

std::ostream &operator << (std::ostream &Output, const Bureaucrat Copy)
{
	Output << Copy.GetName() << ", bureaucrat grade " << Copy.GetGrade();  
	return (Output);
}