/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 12:51:15 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:38:08 by katherine     ########   odam.nl         */
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
		std::string Name;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string Name);
		~DiamondTrap(void);

		void Attack(std::string const & Target);
		void WhoAmI(void);
};

#endif
