/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/19 16:49:06 by kfu           #+#    #+#                 */
/*   Updated: 2021/11/19 16:51:03 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
};
