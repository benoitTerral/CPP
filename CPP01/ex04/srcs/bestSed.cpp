/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bestSed.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:54:08 by bterral           #+#    #+#             */
/*   Updated: 2022/08/06 08:55:31 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bestSed.hpp"

int main( int argc, char **argv )
{	
	std::string								word;
	std::vector<std::string>				words;
	int										nbWords = 0;
	std::vector<std::string> 				stringArgs(argv, argv + argc);
	std::ifstream							ifs(argv[1]);
	std::string								newFileName;
	std::string								fileName(argv[1]);
	std::ofstream							ofs;


	if (argc != 4)
	{
		std::cout << RED << "3 arguments expected: FILE_NAME SEARCH_STRING REPLACEMENT" << RESET << std::endl;
		return (1);
	}
	if (!ifs)
	{
		std::cout << RED << "Failed to open file" << RESET << std::endl;
		return (1);
	}
	while ( ifs >> word )
	{
		if (word == stringArgs[2])
			words.push_back( stringArgs[3] );
		else
			words.push_back ( word );
		nbWords++;
	}
	newFileName = fileName + ".replace";
	ofs.open(newFileName.c_str());
	for (int i = 0; i < nbWords; i++)
		ofs << words[i];
	ofs.close();
	return (0);
}