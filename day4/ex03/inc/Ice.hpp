/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 15:21:28 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 19:10:48 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &Copy);
		Ice &operator= (const Ice &Copy);
		~Ice(void);
		AMateria *Clone(void) const;
		virtual void Use(ICharacter &Target);
};

#endif
