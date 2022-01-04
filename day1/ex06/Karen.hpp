/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/01 15:15:53 by kfu           #+#    #+#                 */
/*   Updated: 2021/12/05 13:00:12 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3

class Karen {
	public:
		bool complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif