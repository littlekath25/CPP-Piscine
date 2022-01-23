/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/23 12:58:03 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/23 15:36:54 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {}

Span::Span(unsigned int Size) : _Size(Size) {}

Span::Span(Span const &Copy)
{
	_Size = Copy._Size;
	_Data = Copy._Data;
}

Span & Span::operator=(Span const &Copy)
{
	if (this != &Copy)
	{
		_Size = Copy._Size;
		_Data = Copy._Data;
	}
	return (*this);
}

Span::~Span(void) {}

void	Span::AddNumber(int Value)
{
	if (_Data.size() < _Size)
		_Data.push_back(Value);
	else
		throw VectorFull();
}

void	Span::AddNumber(std::vector<int>::iterator const Begin, std::vector<int>::iterator const End)
{
	unsigned int Size = std::distance(Begin, End);
	if (Size > _Size)
		throw VectorFull();
	_Data.insert(_Data.end(), Begin, End);
}

int		Span::ShortestSpan(void)
{
	if (_Data.size() <= 1)
		throw SpanCantBeFound();
	std::vector<int> Copy = _Data;
	std::sort(Copy.begin(), Copy.end());
	std::vector<int>::iterator Current = Copy.begin();
	std::vector<int>::iterator Next = ++Copy.begin();
	int Span = *Next - *Current;

	while (Next != Copy.end())
	{
		if (*Next - *Current < Span)
			Span = (*Next - *Current);
		Current++;
		Next++;
	}
	return (Span);
}

int		Span::LongestSpan(void)
{
	if (_Data.size() <= 1)
		throw SpanCantBeFound();

	std::vector<int> Copy = _Data;
	std::sort(Copy.begin(), Copy.end());
	int Span = Copy.back() - Copy.front();
	return (Span);
}
