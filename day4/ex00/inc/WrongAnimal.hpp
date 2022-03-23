/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:18:06 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 18:45:28 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	Type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &Copy);
		WrongAnimal &operator= (const WrongAnimal &Copy);
		~WrongAnimal(void);
		std::string 	GetType(void) const;
		void			MakeSound(void) const;
};

#endif
