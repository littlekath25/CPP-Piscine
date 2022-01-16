/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/16 17:57:52 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/16 19:38:05 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t Serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int		main(void)
{
	Data PersonA;
	Data *PersonB;
	uintptr_t Output;

	PersonA.Name = "Katherine";
	PersonA.Age = 28;
	PersonA.Gender = 'F';

	Output = Serialize(&PersonA);
	PersonB = Deserialize(Output);

	std::cout << "Name: " << PersonB->Name << "\n";
	std::cout << "Age: " << PersonB->Age <<  "\n";
	std::cout << "Gender: " << PersonB->Gender << std::endl ;
	return(0);
}
