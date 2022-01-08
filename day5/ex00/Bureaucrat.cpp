/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:36:35 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/08 14:10:32 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : Name(NULL), Grade(0)
{
}

Bureaucrat::Bureaucrat(std::string NewName, int NewGrade) : Name(NewName), Grade(NewGrade)
{
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &Copy)
{
	
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat &Copy)
{
	
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string	Bureaucrat::GetName(void)
{
	return (this->Name);
}

int	Bureaucrat::GetGrade(void)
{
	return (this->Grade);
}