/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/19 16:49:06 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 18:02:26 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::Attack(void)
{
	std::cout << _Name << " attacks with " << _Weapon.GetType() << std::endl;
}
