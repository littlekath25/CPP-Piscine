/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:02 by kfu           #+#    #+#                 */
/*   Updated: 2021/11/13 14:26:19 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name ) {
	Zombie *NewZombie = new Zombie;

	NewZombie->_ZombieName = name;
	return (NewZombie);
}
