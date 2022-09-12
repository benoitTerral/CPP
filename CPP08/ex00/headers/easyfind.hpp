/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:40:02 by bterral           #+#    #+#             */
/*   Updated: 2022/09/12 17:04:09 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>

class notInContainerException : public std::exception
{
	public:
		const char*	what () const throw ()
		{
			return ("Nb not found in container");
		}
};


template<typename T>
typename T::iterator	easyfind(T container, int nb)
{
	typename T::iterator	iter;
	
	for (iter = container.begin(); iter != container.end(); iter++)
	{
		if (*iter == nb)
			return (iter);
	}
	if (iter == container.end())
		throw	notInContainerException();
	return (iter);
}


#endif