/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:08 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 17:58:14 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	private:
		std::string _ZombieName;

	public:
		Zombie(void);
		~Zombie(void);
		void Announce(void);
		void SetName( std::string name ) {
			_ZombieName = name;
		}
};

Zombie* ZombieHorde( int N, std::string name );

#endif
