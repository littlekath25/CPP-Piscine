/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 11:49:49 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:10:48 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		static const int _Frac = 8;
		int _Fixed;

	public:
		Fixed();
		Fixed(const Fixed &Copy);
		~Fixed(void);

		Fixed& operator= (Fixed &Copy);
		int GetRawBits(void) const;
		void SetRawBits(int const raw);
};

#endif
