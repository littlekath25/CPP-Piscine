/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/01 15:15:53 by kfu           #+#    #+#                 */
/*   Updated: 2021/12/03 16:34:38 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3

class Karen {
	public:
		bool complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};