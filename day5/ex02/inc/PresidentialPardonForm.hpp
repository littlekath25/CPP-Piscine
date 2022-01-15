/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/13 18:33:44 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 10:55:52 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string Target);
		PresidentialPardonForm(const PresidentialPardonForm &Copy);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &Copy);
		~PresidentialPardonForm();

		void	Action(Bureaucrat const & Executor) const;
};

#endif
