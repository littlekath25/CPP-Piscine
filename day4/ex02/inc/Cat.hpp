/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:35 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 14:05:54 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
	private:
		Brain *MyBrain;

	public:
		Cat(void);
		Cat(const Cat &Copy);
		~Cat(void);
		Brain			*GetBrain(void) const;
		void	MakeSound(void) const;
};

#endif