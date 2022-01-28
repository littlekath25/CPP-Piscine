/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 12:51:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 17:49:36 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _Name;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string Name);
		DiamondTrap(const DiamondTrap &Copy);
		DiamondTrap &operator= (const DiamondTrap &Copy);
		~DiamondTrap(void);

		void Attack(std::string const & Target);
		void WhoAmI(void);
};

#endif
