/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:08 by kfu           #+#    #+#                 */
/*   Updated: 2021/11/13 14:48:56 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		void announce( void );
		Zombie* newZombie( std::string name );
		~Zombie(void) {
			std::cout << "Killing the zombie " << _ZombieName << std::endl; 
		};

	private:
		std::string _ZombieName;
};

void randomChump( std::string name );

#endif
