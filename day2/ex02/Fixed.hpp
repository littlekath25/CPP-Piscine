/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 11:49:49 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/03 14:09:01 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		static const int _Frac = 8;
		int _Fixed;

	public:
		Fixed();
		Fixed(const int	Fixed);
		Fixed(const float Frac);
		Fixed(const Fixed &Copy);
		~Fixed(void);
		Fixed &operator = (const Fixed &Copy);

		Fixed operator + (const Fixed &Copy) const;
		Fixed operator - (const Fixed &Copy) const;
		Fixed operator * (const Fixed &Copy) const;
		Fixed operator / (const Fixed &Copy) const;

		Fixed & operator++(void);            //Pre increment
        Fixed operator++(int);              //Post increment
        Fixed & operator--(void);            //Pre decrement
        Fixed operator--(int);              //Post decrement

		bool operator > (const Fixed &Copy) const;
		bool operator < (const Fixed &Copy) const;
		bool operator >= (const Fixed &Copy) const;
		bool operator <= (const Fixed &Copy) const;
		bool operator == (const Fixed &Copy) const;
		bool operator != (const Fixed &Copy) const;
		
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);

		static Fixed &min(Fixed &First, Fixed &Second);
		static Fixed &max(Fixed &First, Fixed &Second);
		
		const static Fixed &min(const Fixed &First, const Fixed &Second);
		const static Fixed &max(const Fixed &First, const Fixed &Second);
};

// Fixed &min(Fixed &First, Fixed &Second);
// Fixed &max(Fixed &First, Fixed &Second);
std::ostream &operator << (std::ostream &output, const Fixed &Copy);

#endif
