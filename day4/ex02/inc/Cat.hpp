/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:35 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 19:01:55 by kfu           ########   odam.nl         */
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
		Brain *_MyBrain;

	public:
		Cat(void);
		Cat(const Cat &Copy);
		Cat &operator= (const Cat &Copy);
		~Cat(void);
		Brain	*GetBrain(void) const;
		void	MakeSound(void) const;
};

#endif
