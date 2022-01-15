/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/26 11:44:09 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 22:44:00 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string WeaponType)
{
	_type = WeaponType;
}

std::string Weapon::GetType(void)
{
	return (_type);
}

void		Weapon::SetType(std::string type)
{
	_type = type;
}
