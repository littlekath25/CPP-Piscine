/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/19 16:09:49 by kfu           #+#    #+#                 */
/*   Updated: 2021/11/19 16:24:42 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(void)
{
	std::string Brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &Brain;
	std::string &stringREF = Brain;
	
	std::cout << "String address:    " << &Brain << std::endl;
	std::cout << "StringPTR address: " << stringPTR << std::endl;
	std::cout << "StringREF address: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String:    " << Brain << std::endl;
	std::cout << "StringPTR: " << *stringPTR << std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;
	return (0);
}