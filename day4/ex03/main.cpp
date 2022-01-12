/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 15:16:35 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:47:59 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int		main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->LearnMateria(new Ice());
	src->LearnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->CreateMateria("ice");
	me->Equip(tmp);
	tmp = src->CreateMateria("cure");
	me->Equip(tmp);
	ICharacter* bob = new Character("bob");
	me->Use(0, *bob);
	me->Use(1, *bob);
	delete bob;
	delete me;
	delete src;

	return (0);
}
