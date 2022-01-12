/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:00 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 16:39:50 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde( int N, std::string name )
{
	Zombie *Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Horde[i].SetName(name);
		Horde->Announce();
	}
	return (Horde);
}
