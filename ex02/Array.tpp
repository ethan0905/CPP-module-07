/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:49:12 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/08 19:36:28 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
class	Template {
	public:
		Template<T>( void ) : _n(42) { return; }
		Template<T>( T const & src ) { *this = src; return ; }
		~Template<T>( void ) { return ; }

		int	getN( void )const { return (this->_n); }
		
		Template	&operator=( Template<T> const & src ) { this->_n = src.getN(); return(*this); }
		std::ostream	&operator<<(std::ostream &o, Template const &src) { o << src.getN(); return (o); }
	private:
		int	_n;
};

#endif