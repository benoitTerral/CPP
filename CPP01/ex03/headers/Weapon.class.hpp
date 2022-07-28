/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:52:44 by bterral           #+#    #+#             */
/*   Updated: 2022/07/28 15:21:03 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Weapon
{
	public:
		Weapon ( std::string name );
		Weapon ( void );
		~Weapon( void );
		std::string	getType( void ) const;
		void		setType( std::string type);
	private:
		std::string	_type;
};