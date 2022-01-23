/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/23 12:57:32 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/23 15:36:24 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>

class Span
{
	private:
		Span();
		std::vector<int>	_Data;
		unsigned int		_Size;

	public:
		Span(unsigned int Size);
		Span(Span const &Copy);
		Span &operator= (Span const &Copy);
		~Span();

		void	AddNumber(int Value);
		void	AddNumber(std::vector<int>::iterator const Begin, std::vector<int>::iterator const End);
		int		ShortestSpan(void);
		int		LongestSpan(void);

		class SpanCantBeFound : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Span can't be found");
				};
		};

		class VectorFull : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Can't add, the data is full");
				};
		};
		
};

#endif
