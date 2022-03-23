/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:18:06 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 18:55:09 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	Type;

	public:
		Animal(void);
		Animal(const Animal &Copy);
		Animal &operator= (const Animal &Copy);
		virtual ~Animal(void);
		std::string 	GetType(void) const;
		virtual void	MakeSound(void) const;
};

#endif
