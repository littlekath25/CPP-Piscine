/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:00 by kfu           #+#    #+#                 */
/*   Updated: 2021/11/19 16:01:41 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *ZombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		ZombieHorde[i].SetName(name);
		ZombieHorde->announce();
	}
	return (ZombieHorde);
}
