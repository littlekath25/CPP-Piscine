/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/08 13:36:37 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/08 14:07:39 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		const std::string	Name;
		int					Grade;
	
	public:
		Bureaucrat(void);
		Bureaucrat(std::string NewName, int NewGrade);
		Bureaucrat(const Bureaucrat &Copy);
		Bureaucrat &operator= (const Bureaucrat &Copy);
		~Bureaucrat(void);

		std::string	GetName(void);
		int			GetGrade(void);
};

#endif