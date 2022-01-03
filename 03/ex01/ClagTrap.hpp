/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClagTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:07:13 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/03 21:56:58 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string Name;
		int			HitPoints;
		int			EnergyPoints;
		int			AttackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string NewName) : Name(NewName), HitPoints(100), EnergyPoints(50), AttackDamage(20){
			std::cout << "Name constructor called." << std::endl;
		};
		~ClapTrap(void);
		void Attack(std::string const & Target);
		void TakeDamage(unsigned int Amount);
		void BeRepaired(unsigned int Amount);
};

#endif