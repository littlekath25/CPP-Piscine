/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:36:35 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 23:06:26 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string NewName, int NewGrade) : _Name(NewName)
{
	if (NewGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (NewGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_Grade = NewGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Copy) : _Name(Copy._Name)
{
	this->_Grade = Copy._Grade;
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat &Copy)
{
	if (this != &Copy)
		this->_Grade = Copy._Grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void) {} // Destructor

std::string	Bureaucrat::GetName(void) const
{
	return (this->_Name);
}

int	Bureaucrat::GetGrade(void) const
{
	return (this->_Grade);
}

void	Bureaucrat::IncrementGrade(int Amount)
{
	std::cout << "Trying to increment grade " << this->GetGrade() << " to " << this->GetGrade() - Amount << std::endl;
	if (this->_Grade - Amount < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_Grade -= Amount;
}

void	Bureaucrat::DecrementGrade(int Amount)
{
	std::cout << "Trying to decrement grade " << this->GetGrade() << " to " << this->GetGrade() + Amount << std::endl;
	if (this->_Grade + Amount > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade += Amount;
}

void	Bureaucrat::SignForm(Form &FormToSign)
{
	try
	{
		FormToSign.BeSigned(*this);
		std::cout << this->GetName() << " signs " << FormToSign.GetName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->GetName() << " cannot sign " << FormToSign.GetName() << " because " << e.what() << std::endl;
	}
	
}

std::ostream &operator << (std::ostream &Output, const Bureaucrat Copy)
{
	Output << Copy.GetName() << ", bureaucrat grade " << Copy.GetGrade();  
	return (Output);
}
