/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 15:16:40 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 19:09:45 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &Copy);
		Cure &operator= (const Cure &Copy);
		~Cure(void);
		AMateria *Clone(void) const;
		virtual void Use(ICharacter &Target);
};

#endif
