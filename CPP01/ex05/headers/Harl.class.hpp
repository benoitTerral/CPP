/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:40:29 by bterral           #+#    #+#             */
/*   Updated: 2022/08/10 19:16:30 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Harl
{
	public:
		Harl ( void );
		~Harl ( void );
		void	complain( std::string level);
	private:
		void	_debug ( void );
		void	_info ( void );
		void	_warning ( void );
		void	_error ( void );
};