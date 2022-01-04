/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:35:55 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/04 14:22:38 by katherine     ########   odam.nl         */
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
		ScavTrap(std::string Name) : ClapTrap(Name){
			std::cout << "ScavTrap name constructor called." << std::endl;
			HitPoints = 100;
			EnergyPoints = 50;
			AttackDamage = 20;
		};
		~ScavTrap(void);
		void GuardGate();
};

# endif