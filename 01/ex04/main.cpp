/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/26 12:41:58 by kfu           #+#    #+#                 */
/*   Updated: 2021/11/26 18:00:33 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> 
#include <string>

int	main(int argc, char *argv[])
{
	std::ifstream MyFile;

	if (argc == 4)
	{    
		MyFile.open(argv[1], std::ifstream::in);
		MyFile.close();
	}
	else
		std::cout << "./replace [filename] [string to replace] [new string]" << std::endl;
  	return (0);
}
