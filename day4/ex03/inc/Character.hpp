/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 18:54:28 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 19:16:12 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string Name;
		AMateria *Materia[4];

	public:
		Character();
		Character(std::string NewName);
		Character(const Character &Copy);
		~Character(void);

		std::string const & GetName() const;
		void Equip(AMateria* Materia);
		void Unequip(int Index);
		void Use(int Index, ICharacter& Target);
};

#endif