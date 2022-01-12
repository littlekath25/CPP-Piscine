/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:00 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 16:34:49 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void RandomChump( std::string name ){
	Zombie NewZombie(name);
	NewZombie.Announce();
}
