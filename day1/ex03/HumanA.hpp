/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/19 16:39:45 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 17:58:43 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string _Name;
		Weapon &_Weapon;

	public:
		HumanA(std::string name, Weapon &weapon) : _Name(name), _Weapon(weapon){};
		void Attack();
};

#endif
