/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.tpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/23 15:41:42 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/25 22:32:39 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack() : MutantStack<T>::stack() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &Copy) : MutantStack<T>::stack(Copy) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &Copy) {
	if (this != &Copy)
		MutantStack<T>::stack::operator=(Copy);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
MutantStack<T>::~MutantStack() {}
