/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:06 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 16:35:21 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	_ZombieName = name;
}

Zombie::~Zombie(void) {
	std::cout << "Killing the zombie " << _ZombieName << std::endl; 
}

void Zombie::Announce( void ) {
	std::cout << _ZombieName<< " BraiiiiiiinnnzzzZ..." << std::endl; 
}
