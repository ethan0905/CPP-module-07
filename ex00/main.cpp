/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:02 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/08 00:40:34 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(int ac, char **av)
{
	(void)av;

	if (ac == 1)
	{
		int a = 2;
		int b = 3;
		
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		
		std::string c = "chaine1";
		std::string d = "chaine2";
		
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;		
	}
	else
		std::cerr << "Error: invalid synthax. Try with ./execName" << std::endl;

	return (0);
}