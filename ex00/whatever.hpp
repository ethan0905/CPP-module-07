/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:33:29 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/08 00:46:13 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T & x, T & y){
	
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T	min(T const & x, T const & y){
	
	if (x < y)
		return (x);
	return (y);
}

template<typename T>
T	max(T const & x, T const & y){
	
	if (x > y)
		return (x);
	return (y);
}

#endif