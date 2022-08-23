/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:03:25 by bterral           #+#    #+#             */
/*   Updated: 2022/08/23 11:59:17 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int					_integer;
		static const int	_factrional_bit = 8;
	public:
		Fixed ( void );
		Fixed ( Fixed const& copy );
		Fixed& operator= ( const Fixed& rhs );
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};