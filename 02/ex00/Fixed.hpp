/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 11:49:49 by katherine     #+#    #+#                 */
/*   Updated: 2021/12/05 12:55:04 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &Copy);
		~Fixed(void);
		Fixed& operator= (Fixed &Copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		static const int _Frac = 8;
		int _Fixed;
};

#endif