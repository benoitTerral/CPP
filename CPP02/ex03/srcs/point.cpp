/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:27:49 by bterral           #+#    #+#             */
/*   Updated: 2022/08/24 15:59:53 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.h"

Point::Point( void ): _x(0), _y(0)
{
	return ;
}

Point::Point (const float x, const float y):  _x(x), _y(y)
{
	return ;
}

Point::Point ( Point const& copy)
{
	*this = copy;
	return ;
}

Point& operator= (const Point& rhs)
{
	this->_x = rhs->
}

Fixed	Point::getX( void ) const
{
	return (this->_x);
}

Fixed	Point::getY( void ) const
{
	return (this->_y);
}

