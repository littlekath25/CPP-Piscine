/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 09:18:38 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/21 14:02:49 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <iterator>

class CantFindValue : public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("Can't find the value");
		};
};

template <typename T>
typename T::iterator EasyFind(T &Container, int Value)
{
	for (typename T::iterator It = Container.begin(); It != Container.end(); It++)
	{
		if (*It == Value)
			return (It);
	}
	throw CantFindValue();
}

#endif
