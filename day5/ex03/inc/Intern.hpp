/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/14 11:09:25 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 15:45:39 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern &operator= (const Intern &Copy);

		Form *MakeForm(std::string Name, std::string Target);
		
		Form *CreateShrubberyForm(std::string Target);
		Form *CreateRobotomyForm(std::string Target);
		Form *CreatePresidentialForm(std::string Target);

		class FormNotFound : public std::exception
		{
			public:
				const char *what() const throw ()
				{
					return ("Can't find the form");
				};
		};

		typedef Form* (Intern::*GenerateForm)(std::string);
};

#endif
