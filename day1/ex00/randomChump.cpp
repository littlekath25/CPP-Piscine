/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:00 by kfu           #+#    #+#                 */
/*   Updated: 2021/11/19 11:19:47 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name ){
	Zombie NewZombie(name);

	NewZombie.announce();
}
