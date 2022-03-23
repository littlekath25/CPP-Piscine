/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:37 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 18:52:25 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &Copy);
		Dog &operator= (const Dog &Copy);
		~Dog(void);
		void	MakeSound(void) const;
};

#endif
