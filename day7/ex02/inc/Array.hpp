/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 16:05:18 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/19 17:57:54 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{
	private:
		T	*_MyArray;
		int	_Size;

	public:
		Array() : _MyArray(new T[0]), _Size(0) {}; 
		Array(unsigned int N) : _MyArray(new T[N]), _Size(N) {};
		Array(const Array &Copy) {
			if (_Size != 0)
			{
				_MyArray = new T[_Size];
				for (int i = 0; i < _Size; ++i)
					_MyArray[i] = Copy._MyArray[i];
			}
			else
				_MyArray = new T[0];
			return (*this);
		};
		Array &operator= (const Array &Copy) {
			for (int i = 0; i < _Size; ++i)
					_MyArray[i] = Copy._MyArray[i];
		};
		~Array() {};

		int		Size(void) const {
			return (_Size);
		};

		class ElementOutOfLimits : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Element is out of limits");
				};
		};
};

#endif
