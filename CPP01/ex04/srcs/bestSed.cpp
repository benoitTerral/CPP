/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bestSed.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:54:08 by bterral           #+#    #+#             */
/*   Updated: 2022/07/29 17:48:21 by bterral          ###   ########.fr       */
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
	std::ofstream							ofs(stringArgs[1].append(".replace"));
	for (int i = 0; i < nbWords; i++)
		ofs << words[i];
	ofs.close();
	return (0);
}