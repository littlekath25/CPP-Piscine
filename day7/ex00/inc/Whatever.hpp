/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:19:18 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/19 15:23:14 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename MyType> void swap(MyType &First, MyType &Second)
{
	MyType Temp = First;

	First = Second;
	Second = Temp;
}

template <typename MyType> MyType min (MyType First, MyType Second)
{
	return (First < Second ? First : Second);
}

template <typename MyType> MyType max (MyType First, MyType Second)
{
	return (First > Second ? First : Second);
}

#endif
