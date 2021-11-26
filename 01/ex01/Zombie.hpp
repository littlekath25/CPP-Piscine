/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:08 by kfu           #+#    #+#                 */
/*   Updated: 2021/11/19 15:57:06 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		Zombie(){};
		~Zombie(void) {
			std::cout << "Killing the zombie " << _ZombieName << std::endl; 
		};
		void announce( void );
		void SetName( std::string name ) {
			_ZombieName = name;
		}

	private:
		std::string _ZombieName;
};

Zombie* zombieHorde( int N, std::string name );

#endif
