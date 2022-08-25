/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:22:15 by bterral           #+#    #+#             */
/*   Updated: 2022/08/24 16:01:16 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.h"

class Point
{
	private:
		Fixed _x;
		Fixed _y;
	public:
		Point ( void );
		Point (const float x, const float y);
		Point ( Point const& copy);
		Point& operator= (const Point& rhs);
		~Point ( void );
		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
};