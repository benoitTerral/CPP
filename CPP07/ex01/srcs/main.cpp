/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:15:17 by bterral           #+#    #+#             */
/*   Updated: 2022/10/04 13:46:27 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/iter.hpp"

// int main( void )
// {
// 	int		int_array[3] = {2, 3, 4};
// 	float	float_array[3] = {2.69, 3.2, 4.44};
// 	float	double_array[2] = {1000000, -69.3};

// 	std::cout << "Int array {2, 3, 4} * 2" << std::endl;
// 	iter<int>(int_array, 3, time_two);
// 	std::cout << "Float array {2.69, 3.2, 4.44} * 2" << std::endl;
// 	iter(float_array, 3, time_two);
// 	std::cout << "Double array {1000000, -69.3} * 2" << std::endl;
// 	iter(double_array, 2, time_two);

// 	return (0);
// }

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) {}
		int	get( void ) const {return this->_n;}
	private:
		int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) {o << a.get(); return o;}

template<typename T>
void print(T const & x){std::cout << x << std::endl; return ;}

int main(void)
{
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return (0);
}