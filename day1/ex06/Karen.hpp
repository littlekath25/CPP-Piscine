/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/01 15:15:53 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 18:07:44 by katherine     ########   odam.nl         */
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
	private:
		void _Debug(void);
		void _Info(void);
		void _Warning(void);
		void _Error(void);

	public:
		bool Complain(std::string level);
};

#endif
