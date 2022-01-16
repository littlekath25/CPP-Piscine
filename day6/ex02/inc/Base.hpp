/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/16 20:17:56 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/16 20:35:20 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	public:
		virtual ~Base(){};
};

Base *Generate(void);
void Identify(Base* p);
void Identify(Base& p);

#endif
