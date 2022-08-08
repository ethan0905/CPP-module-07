/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:02 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/08 19:17:07 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(int ac, char **av)
{
	(void)av;

	if (ac == 1)
	{
		int intTab[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		char charTab[12] = "0123456789\0";

		::iter(intTab, 5, print);
		::iter(charTab, 5, print);

		ClassTest	classTab[10];

		::iter(classTab, 5, print);
	}
	else
		std::cerr << "Error: invalid synthax. Try with ./execName" << std::endl;

	return (0);
}