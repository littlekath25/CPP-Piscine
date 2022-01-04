/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:07:13 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/04 14:24:21 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string Name;
		int			HitPoints;
		int			EnergyPoints;
		int			AttackDamage;

	public:
		ClapTrap(void) : HitPoints(10), EnergyPoints(10), AttackDamage(0){
			std::cout << "ClapTrap default constructor called." << std::endl;
		};
		ClapTrap(std::string NewName) : Name(NewName), HitPoints(10), EnergyPoints(10), AttackDamage(0){
			std::cout << "ClapTrap name constructor called." << std::endl;
		};
		~ClapTrap(void);
		void Attack(std::string const & Target);
		void TakeDamage(unsigned int Amount);
		void BeRepaired(unsigned int Amount);
};

#endif