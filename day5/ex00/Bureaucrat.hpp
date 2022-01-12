/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:36:37 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/11 19:07:47 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		const std::string	Name;
		int					Grade;
	
	public:
		Bureaucrat(std::string NewName, int NewGrade);
		Bureaucrat(const Bureaucrat &Copy);
		Bureaucrat &operator= (const Bureaucrat &Copy);
		~Bureaucrat(void);

		std::string	GetName(void) const;
		int			GetGrade(void) const;

		void		IncrementGrade(int Amount);
		void		DecrementGrade(int Amount);
};

std::ostream &operator << (std::ostream &Output, const Bureaucrat Copy);

#endif