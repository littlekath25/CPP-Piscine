/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:37 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:44:08 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
	private:
		Brain *_MyBrain;

	public:
		Dog(void);
		Dog(const Dog &Copy);
		~Dog(void);
		Brain	*GetBrain(void) const;
		void	MakeSound(void) const;
};

#endif
