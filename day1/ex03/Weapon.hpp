/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/19 16:34:56 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 22:44:07 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
	public:
		Weapon(std::string WeaponType);
		std::string GetType(void);
		void		SetType(std::string type);

	private:
		std::string _type;
};

#endif
