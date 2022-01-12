/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/12 19:12:07 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 23:09:14 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
	private:
		Form(void);
		const std::string 	_Name;
		bool				_Signed;
		const int			_GradeToSign;
		const int			_GradeToExe;

	public:
		Form(std::string Name, int GradeToSign, int GradeToExe);
		Form(const Form &Copy);
		Form &operator= (const Form &Copy);
		~Form(void);

		std::string	GetName(void) const;
		bool		GetStatus(void) const;
		int			GetGradeToSign(void) const;
		int			GetGradeToExe(void) const;

		void		BeSigned(const Bureaucrat Person);

		class GradeTooHighException : public std::exception {	
			public:
				const char *what() const throw ()
				{
					return ("the grade is too high");
				};
		};

		class GradeTooLowException : public std::exception {	
			public:
				const char *what() const throw ()
				{
					return ("the grade is too low");
				};
		};
};

std::ostream &operator << (std::ostream &Output, const Form Copy);

#endif
