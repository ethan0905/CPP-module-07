/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:49:12 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/08 00:59:17 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T const & addr, T const & size/*, T const & f()*/){
	
	for(int i = 0; i < size; i++){
		std::cout << "[" << addr[i] << "]" << std::endl;
	}
}

#endif