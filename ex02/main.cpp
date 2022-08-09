/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:02 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/09 12:36:10 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "iter.hpp"

// int	main(int ac, char **av)
// {
// 	(void)av;

// 	if (ac == 1)
// 	{
// 		int intTab[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 		char charTab[12] = "0123456789\0";

// 		::iter(intTab, 5, print);
// 		::iter(charTab, 5, print);

// 		ClassTest	classTab[10];

// 		::iter(classTab, 5, print);
// 	}
// 	else
// 		std::cerr << "Error: invalid synthax. Try with ./execName" << std::endl;

// 	return (0);
// }

#include <iostream>
#include <cstdlib>
#include "Array.tpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}