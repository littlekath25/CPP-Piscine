/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:18:06 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 18:59:33 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	Type;
		Animal(const Animal &Copy);
		Animal &operator= (const Animal &Copy);
		Animal(void);

	public:
		virtual ~Animal(void);
		std::string 	GetType(void) const;
		virtual void	MakeSound(void) const = 0;
};

#endif
