/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 12:21:16 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 17:55:25 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string Name);
		FragTrap(const FragTrap &Copy);
		FragTrap &operator= (const FragTrap &Copy);
		~FragTrap(void);
		void HighFivesGuys(void);
		void Attack(std::string const & Target);
};

#endif
