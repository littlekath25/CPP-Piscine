/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/12 19:12:07 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 10:47:28 by katherine     ########   odam.nl         */
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
		const std::string 	_Name;
		std::string			_Target;
		bool				_Signed;
		const int			_GradeToSign;
		const int			_GradeToExe;

	public:
		Form(void);
		Form(std::string Name, std::string Target, int GradeToSign, int GradeToExe);
		Form(const Form &Copy);
		Form &operator= (const Form &Copy);
		~Form(void);

		std::string		GetName(void) const;
		std::string		GetTarget(void) const;
		bool			GetStatus(void) const;
		int				GetGradeToSign(void) const;
		int				GetGradeToExe(void) const;

		void			BeSigned(const Bureaucrat Signer);
		void			Execute(Bureaucrat const & Executor) const;
		
		virtual	void	Action(Bureaucrat const & Executor) const = 0;

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

		class FormNotSigned : public std::exception {	
			public:
				const char *what() const throw ()
				{
					return ("the form is not signed");
				};
		};
};

std::ostream &operator << (std::ostream &Output, const Form &Copy);

#endif
