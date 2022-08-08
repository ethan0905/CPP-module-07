/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:49:12 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/08 23:41:15 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
class	Array {

	public:
		Array<T>( void ) { 
		
			this->_array = NULL;
			this->_n = 0;
			return;
		}
		Array<T>( unsigned int n ) : _n(n) {
			
			this->_array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->_array[i] = 0; 
			return ;
		}
		Array<T>( T const & src ) {
			
			*this = src;
			return ;
		}
		~Array<T>( void ) {
			
			delete (this->_array);
			return ;
		}
		
		Array	&operator=( Array<T> const & src ) {
			
			if (this != src)
			{
				if (this->_array)
					delete (this->_array);
				this->_array = new T[src._n];
				for (unsigned int i = 0; i < src._n; i++)
					this->_array[i] = src._array[i];
			}
			return(*this);
		}
		
		// specify which element is findable at tab[i] position
		T	&operator[]( unsigned int i ) {
			
			if (i >= this->_n)
				throw Array::InvalidIndexException();
			return(*this);
		}
		
		// std::ostream	&operator<<(std::ostream &o, Array const &src) {
			
		// 	(void)src;
		// 	return (o);
		// }
		
		class InvalidIndexException : public std::exception {
			public:
				virtual const char* what()const throw() {
					return ("Error: invalid index");
				}
		};
	private:
		T	*_array;
		unsigned int	_n;
};

#endif