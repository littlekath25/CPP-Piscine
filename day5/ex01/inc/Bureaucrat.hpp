/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:36:37 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 23:00:23 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Form;

class Bureaucrat
{
	private:
		const std::string	_Name;
		int					_Grade;
	
	public:
		Bureaucrat(void);
		Bureaucrat(std::string NewName, int NewGrade);
		Bureaucrat(const Bureaucrat &Copy);
		Bureaucrat &operator= (const Bureaucrat &Copy);
		~Bureaucrat(void);

		std::string	GetName(void) const;
		int			GetGrade(void) const;

		void		IncrementGrade(int Amount);
		void		DecrementGrade(int Amount);

		void		SignForm(Form &FormToSign);

		class GradeTooHighException : public std::exception {	
			public:
				const char *what() const throw ()
				{
					return ("Sorry, the grade is too high");
				};
		};

		class GradeTooLowException : public std::exception {	
			public:
				const char *what() const throw ()
				{
					return ("Sorry, the grade is too low");
				};
		};
};

std::ostream &operator << (std::ostream &Output, const Bureaucrat Copy);

#endif
