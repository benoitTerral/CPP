/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:16:17 by bterral           #+#    #+#             */
/*   Updated: 2022/09/05 18:43:53 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

Base::~Base()
{
	std::cout << "base destructor called" << std::endl;
}