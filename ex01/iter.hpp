/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:49:12 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/08 18:30:46 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	print( T const &addr ) {
	std::cout << addr << std::endl;
}

template<typename T>
void	iter(T const *addr, int size, void (*f)(T const &)){
	
	for(int i = 0; i < size; i++){
		(*f)(addr[i]);
	}
}

#endif