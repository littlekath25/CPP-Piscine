/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:06 by kfu           #+#    #+#                 */
/*   Updated: 2021/10/29 15:56:31 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::annouce(void)
{
	std::cout << _ZombieName << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~murder_zombie(void)
{
	std::cout << "MuuuuUuuuurdereddd.... " << _ZombieName << std::endl;
}