/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:35:55 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 17:47:25 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap &Copy);
		ScavTrap &operator= (const ScavTrap &Copy);
		~ScavTrap(void);
		void GuardGate();
		void Attack(std::string const & Target);
};

# endif
