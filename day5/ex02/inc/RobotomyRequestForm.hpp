/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/13 18:33:44 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 10:55:56 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOT_HPP
# define ROBOT_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string Target);
		RobotomyRequestForm(const RobotomyRequestForm &Copy);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &Copy);
		~RobotomyRequestForm();

		void	Action(Bureaucrat const & Executor) const;
};

#endif
