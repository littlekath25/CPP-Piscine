/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 10:27:25 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/19 15:40:26 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename MyVar> void HelloWorld(MyVar Arg)
{
	std::cout << "HELLO WORLD " << Arg << std::endl;
}

template <typename MyArray, typename MyLength, typename MyFunc> void Iter(MyArray *Begin, MyLength Length, MyFunc Func)
{
	for (int i = 0; i < Length; ++i)
		Func(Begin[i]);
} 

#endif
