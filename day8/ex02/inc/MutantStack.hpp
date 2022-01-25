/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/23 15:41:21 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/25 22:33:40 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack const &Copy);
		MutantStack &operator=(MutantStack const &Copy);
		~MutantStack();

		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

# include "MutantStack.tpp"

#endif
