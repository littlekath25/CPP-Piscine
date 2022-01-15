/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/15 20:20:51 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/15 23:01:34 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <exception>
# include <cmath>

// CHAR, INT, DOUBLE & FLOAT

class Scalar
{
	private:
		std::string _Target;

	public:
		Scalar();
		Scalar(std::string Scalar);
		Scalar(const Scalar &Copy);
		Scalar &operator= (const Scalar &Copy);
		~Scalar();

		void		SetTarget(std::string Target);
		std::string	GetTarget(void);

		char		ConvertChar(void) const;
		int			ConvertInt(void) const;
		float		ConvertFloat(void) const;
		double		ConvertDouble(void) const;

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

std::ostream &operator<< (std::ostream &Output, const Scalar &Copy);

#endif
