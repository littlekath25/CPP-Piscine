/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:21:35 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/04 15:55:22 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		virtual void	MakeSound(void) const;
};

#endif