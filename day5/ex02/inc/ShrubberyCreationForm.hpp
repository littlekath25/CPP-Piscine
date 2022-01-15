/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/13 18:33:44 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/14 10:55:58 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string Target);
		ShrubberyCreationForm(const ShrubberyCreationForm &Copy);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &Copy);
		~ShrubberyCreationForm();

		void	Action(Bureaucrat const & Executor) const;
};

# define SHRUBBERY_TREE \
"    oxoxoo    ooxoo\n"\
"  ooxoxo oo  oxoxooo\n"\
" oooo xxoxoo ooo ooox\n"\
" oxo o oxoxo  xoxxoxo\n"\
"  oxo xooxoooo o ooo\n"\
"    ooo\\oo\\  /o/o\n"\
"        \\  \\/ /\n"\
"         |   /\n"\
"         |  |\n"\
"         | K|\n"\
"         |  |\n"\
"         |  |\n"\
"  ______/____\\____"

#endif
