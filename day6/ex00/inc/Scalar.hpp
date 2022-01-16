/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/15 20:20:51 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/16 17:46:37 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <iomanip>
# include <exception>
# include <math.h>
# include <cmath>
# include <limits.h>

enum e_Type
{
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
	INVALID
};
		
class Scalar
{
	private:
		std::string _Literal;
		e_Type 		_Type;

	public:
		Scalar();
		Scalar(std::string Scalar);
		Scalar(const Scalar &Copy);
		Scalar &operator= (const Scalar &Copy);
		~Scalar();

		void		SetLiteral(std::string Literal);
		void		SetType(e_Type Type);
		std::string	GetLiteral(void) const;
		e_Type		GetType(void) const;

		e_Type		FindType(std::string Literal) const;
		void		ConvertChar(void) const;
		void		ConverInt(void) const;
		void		ConvertFloat(void) const;
		void		ConvertDouble(void) const;

		class NonDisplayableConversion : public std::exception 
		{
			public:
				const char *what() const throw() {
					return ("non displayable");
				}
		};

		class ImpossibleConversion : public std::exception 
		{
			public:
				const char *what() const throw() {
					return ("impossible");
				}
		};
};

std::ostream &operator<< (std::ostream &Output, Scalar &Copy);

#endif
