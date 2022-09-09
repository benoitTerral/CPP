/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bestSed.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:54:08 by bterral           #+#    #+#             */
/*   Updated: 2022/09/09 10:18:19 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bestSed.hpp"


static::std::string	my_replace(std::string input, std::string find_str, std::string replace_str)
{
	std::size_t	pos = 0;
	
	if (find_str.empty() || replace_str.empty())
		return (input);
	std::cout << input << std::endl;
	while ((pos = input.find(find_str, pos)) != std::string::npos)
	{
		input.erase(pos, find_str.length());
		input.insert(pos, replace_str);
		pos += replace_str.length();
	}
	return (input);
}

int main( int argc, char **argv )
{	
	std::ifstream							ifs;
	std::string								newFileName;
	std::ofstream							ofs;
	std::string								line;
	std::string								output_str;

	if (argc != 4)
	{
		std::cout << RED << "3 arguments expected: FILE_NAME SEARCH_STRING REPLACEMENT" << RESET << std::endl;
		return (1);
	}
	ifs.open(argv[1]);
	if (!ifs)
	{
		std::cout << RED << "Failed to open file" << RESET << std::endl;
		return (1);
	}
	std::string								fileName(argv[1]);
	while (std::getline(ifs, line))
	{
		if (!ifs.eof())
			line.append("\n");
		line = my_replace(line, static_cast<std::string>(argv[2]), static_cast<std::string>(argv[3]));
		output_str.append(line);
	}
	ifs.close();
	newFileName = fileName + ".replace";
	ofs.open(newFileName.c_str());
	if (!ofs)
	{
		std::cout << RED << "Failed to create output file" << RESET << std::endl;
		return (1);
	}
	else
	{
		ofs << output_str;
		ofs.close();
	}
	return (0);
}
