/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:17:08 by bterral           #+#    #+#             */
/*   Updated: 2022/08/31 14:25:41 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

class Convert
{
	public:
		Convert( void );
		~Convert( void );
		Convert( std::string litteral);
		Convert ( Convert const& rhs);
		Convert&	operator= ( Convert const& rhs);

		//exceptions
		class unhandledParamater: public std::exception
		{
			public:
				virtual const char* what() const throw();
		}
		;

		//getter
		double		getLiteral( void ) const;

		//print
		void		print_char( void ) const;
		void		print_int( void ) const;
		void		print_float( void ) const;
		void		print_double( void ) const;

	private:
		double		_literal;
		bool		isChar(std::string arg) const;
		bool		isInt(std::string arg) const;
		bool		isDouble(std::string arg) const;
		bool		isfloat(std::string arg) const;
		double		convert_float_limit(std::string literal);
}
;

//surchage operator << 
// std::ostream&	operator<< ( std::ostream& out, const Convert& source);