/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/19 16:34:56 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 14:37:51 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
	public:
		Weapon(std::string WeaponType)
		{
			_type = WeaponType;
		};
		std::string getType(void)
		{
			return (_type);
		};
		void		setType(std::string type)
		{
			_type = type;
		};

	private:
		std::string _type;
};

#endif
