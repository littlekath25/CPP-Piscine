/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/19 16:39:47 by kfu           #+#    #+#                 */
/*   Updated: 2021/11/26 12:30:47 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(std::string name)
			: _name(name)
		{};
		HumanB(std::string name, Weapon &weapon)
			: _name(name), _weapon(&weapon)
		{};
		void	setWeapon(Weapon &weapon)
		{
			_weapon = &weapon;
		};
		void attack();
};

#endif
