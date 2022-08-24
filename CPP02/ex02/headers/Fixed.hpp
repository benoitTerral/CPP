/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:03:25 by bterral           #+#    #+#             */
/*   Updated: 2022/08/24 15:06:53 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int					_integer;
		static const int	_factrional_bit = 8;
	public:
		Fixed ( void );
		Fixed ( const int value );
		Fixed ( const float value );
		Fixed ( Fixed const& copy );
		Fixed& operator= ( const Fixed& rhs );
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		//EX01
		float	toFloat( void ) const;
		int		toInt( void ) const;
		//EX02
		//Comparison operators
		bool	operator> ( const Fixed& rhs ) const;
		bool	operator< ( const Fixed& rhs ) const;
		bool	operator>= ( const Fixed& rhs ) const;
		bool	operator<= ( const Fixed& rhs ) const;
		bool	operator== ( const Fixed& rhs ) const;
		bool	operator!= ( const Fixed& rhs ) const;
		//arithemtic operators
		Fixed	operator+ ( const Fixed& rhs ) const;
		Fixed	operator- ( const Fixed& rhs ) const;
		Fixed	operator* ( const Fixed& rhs ) const;
		Fixed	operator/ ( const Fixed& rhs ) const;
		//Increment operators
		Fixed&	operator++ ( void );
		Fixed&	operator-- ( void );
		Fixed	operator++ ( int );
		Fixed	operator-- ( int );
		//member functions
		static Fixed &min(Fixed& lhs, Fixed& rhs);
		static const Fixed &min(const Fixed& lhs, const Fixed& rhs);
		static Fixed &max(Fixed& lhs, Fixed& rhs);
		static const Fixed &max(const Fixed& lhs, const Fixed& rhs);

}
;
std::ostream& operator<<(std::ostream& out, Fixed const& rhs);