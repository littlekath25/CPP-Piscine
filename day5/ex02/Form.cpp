/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/12 19:17:02 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 11:01:39 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void) : _Name("No name"), _GradeToSign(0), _GradeToExe(0) {}

Form::Form(std::string Name, std::string Target, int GradeToSign, int GradeToExe) : _Name(Name), _Target(Target), _Signed(false), _GradeToSign(GradeToSign), _GradeToExe(GradeToExe) {}

Form::Form(const Form &Copy) : _Name(Copy._Name), _Signed(Copy._Signed), _GradeToSign(Copy._GradeToSign), _GradeToExe(Copy._GradeToExe) {}

Form & Form::operator= (const Form &Copy)
{
	if (this != &Copy)
		this->_Signed = Copy._Signed;
	return (*this);
}

Form::~Form(void) {} // Destructor

std::string	Form::GetName(void) const
{
	return (this->_Name);
}

std::string	Form::GetTarget(void) const
{
	return (this->_Target);
}

bool	Form::GetStatus(void) const
{
	return (this->_Signed);
}

int		Form::GetGradeToSign(void) const
{
	return (this->_GradeToSign);
}

int		Form::GetGradeToExe(void) const
{
	return (this->_GradeToExe);
}

void	Form::BeSigned(const Bureaucrat Signer)
{
	if (Signer.GetGrade() > this->_GradeToSign)
		throw Form::GradeTooLowException();
	this->_Signed = true;
}

void	Form::Execute(Bureaucrat const & Executor) const
{
	if (this->GetStatus() == false)
	{
		std::cout << "Can't execute, ";
		throw Form::FormNotSigned();
	}
	if (Executor.GetGrade() > this->_GradeToExe)
	{
		std::cout << "Can't execute, ";
		throw Form::GradeTooLowException();
	}
}

std::ostream &operator << (std::ostream &Output, const Form &Copy)
{
	Output << "Name: " << Copy.GetName() << "\n";
	Output << "Signed: " << Copy.GetStatus() << "\n";
	Output << "Grade to sign: " << Copy.GetGradeToSign() << "\n";
	Output << "Grade to execute: " << Copy.GetGradeToExe() << std::endl;
	return (Output);
}
