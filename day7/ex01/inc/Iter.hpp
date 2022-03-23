/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 10:27:25 by kfu           #+#    #+#                 */
/*   Updated: 2022/03/23 10:40:12 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename MyVar> void PrintVar(MyVar Arg)
{
	std::cout << Arg << std::endl;
}

template <typename MyArray> void Iter(MyArray *Array, int Length, void (*Func)(MyArray Value))
{
	for (int i = 0; i < Length; ++i)
		Func(Array[i]);
}

#endif
