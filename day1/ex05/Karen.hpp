/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/01 15:15:53 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 18:05:26 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen {
	private:
		void _Debug(void);
		void _Info(void);
		void _Warning(void);
		void _Error(void);

	public:
		void Complain(std::string level);
};

#endif
