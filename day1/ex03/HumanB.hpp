/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/19 16:39:47 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 18:00:55 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB {
	private:
		std::string _Name;
		Weapon *_Weapon;

	public:
		HumanB(std::string name) : _Name(name){};
		HumanB(std::string name, Weapon &weapon) : _Name(name), _Weapon(&weapon){};
		void	SetWeapon(Weapon &weapon);
		void 	Attack();
};

#endif
