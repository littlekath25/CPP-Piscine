/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:08 by kfu           #+#    #+#                 */
/*   Updated: 2021/11/19 11:17:24 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		void announce( void );
		Zombie(std::string name){
			_ZombieName = name;
		};
		~Zombie(void) {
			std::cout << "Killing the zombie " << _ZombieName << std::endl; 
		};

	private:
		std::string _ZombieName;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
