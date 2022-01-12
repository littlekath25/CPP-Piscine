/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:52:08 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 16:32:43 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		void Announce(void);
		Zombie(std::string name);
		~Zombie(void);

	private:
		Zombie(void);
		std::string _ZombieName;
};

Zombie* NewZombie( std::string name );
void RandomChump( std::string name );

#endif
