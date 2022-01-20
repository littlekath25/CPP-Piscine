/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 16:05:18 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/20 20:40:24 by katherine     ########   odam.nl         */
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
			_MyArray = new T[Copy._Size];
			for (int i = 0; i < _Size; ++i)
				_MyArray[i] = Copy._MyArray[i];
		};

		Array &operator= (const Array &Copy) {
			if (this != &Copy)
			{
				this->~Array();
				_Size = Copy._Size;
				_MyArray = new T[_Size];
				for (int i = 0; i < _Size; ++i)
					_MyArray[i] = Copy._MyArray[i];
			}
			return (*this);
		};

		~Array() {
			delete[] _MyArray;
		};

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

		T &operator[] (int Index) const
		{
			if (Index < 0 || Index >= _Size)
				throw ElementOutOfLimits();
			return (_MyArray[Index]);
		}
};

#endif
