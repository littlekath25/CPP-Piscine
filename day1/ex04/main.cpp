/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/26 12:41:58 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 17:56:44 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> 
#include <string>

std::string	open_file_and_parse(char *argv[])
{
	std::string		FileName;
	std::ifstream	MyFile;
	std::string		Data;
	std::string		Line;

	FileName = argv[1];
	MyFile.open(FileName, std::ifstream::in);
	if (MyFile.is_open())
	{
		while (getline(MyFile, Line))
		{
			Data.append(Line);
			Data.append("\n");
		}
		MyFile.close();
	}
	else
		std::cout << "Can't open file" << std::endl;
	return (Data);
}

std::string	find_and_replace(std::string OldString, std::string NewString, std::string Data)
{
	int	Found = 0;
	int	i = 0;

	while ((Found = Data.find(OldString, i)) != -1)
	{
		Data.erase(Found, OldString.size());
		Data.insert(Found, NewString);
		i++;
	}
	return (Data);
}

void	copy_to_new_file(std::string OldName, std::string Data)
{
	std::ofstream	NewFile;
	std::string 	NewName;

	NewName = OldName;
	NewName.append(".replace");
	NewFile.open(NewName, std::ifstream::out);
	NewFile << Data;
}

int	main(int argc, char *argv[])
{
	std::string		Data;
	std::string		OldString;
	std::string		NewString;

	OldString = argv[2];
	NewString = argv[3];
	if (argc == 4)
	{
		Data = open_file_and_parse(argv);
		Data = find_and_replace(OldString, NewString, Data);
		copy_to_new_file(argv[1], Data);
	}
	else
		std::cout << "./replace [filename] [string to replace] [new string]" << std::endl;
  	return (0);
}
