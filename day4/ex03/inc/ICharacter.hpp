/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 15:58:22 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:47:17 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & GetName() const = 0;
		virtual void Equip(AMateria* Materia) = 0;
		virtual void Unequip(int Index) = 0;
		virtual void Use(int Index, ICharacter& Target) = 0;
};

#endif
