/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/19 16:49:08 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 18:02:39 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::Attack(void)
{
	std::cout << _Name << " attacks with " << _Weapon->GetType() << std::endl;
}

void	HumanB::SetWeapon(Weapon &weapon)
{
	_Weapon = &weapon;
}
