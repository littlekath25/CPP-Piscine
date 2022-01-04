/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 11:49:49 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/03 11:42:37 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int	Fixed);
		Fixed(const float Frac);
		Fixed(const Fixed &Copy);
		~Fixed(void);
		Fixed &operator = (const Fixed &Copy);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		static const int _Frac = 8;
		int _Fixed;
};

std::ostream &operator << (std::ostream &output, const Fixed &Copy);

#endif
