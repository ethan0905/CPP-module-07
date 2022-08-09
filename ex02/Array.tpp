/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:49:12 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/09 13:48:25 by esafar           ###   ########.fr       */
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
		Array<T>( T & src ) {
			
			if (this != src)
			{
				if (this->_array)
					delete (this->_array);
				this->_n = src._n;
				this->_array = new T[size(src)];
				for (unsigned int i = 0; i < src._n; i++)
					this->_array[i] = src._array[i];
			}
			return ;
		}
		~Array<T>( void ) {
			
			// delete (this->_array);
			return ;
		}
		
		unsigned int size( T const & array ) {
			
			int i;
			
			for (i = 0; array[i] != '\0'; i++)
				;
			return (i);
		}
		
		Array	&operator=( Array<T> & src ) {
			
			if (this != src)
			{
				if (this->_array)
					delete (this->_array);
				this->_n = src._n;
				this->_array = new T[size(src)];
				for (unsigned int i = 0; i < src._n; i++)
					this->_array[i] = src._array[i];
			}
			return(*this);
		}
		
		// specify which element is findable at tab[i] position
		T	&operator[]( unsigned int i ) {
			
			// std::cout << "tab[" << i << "] = " << this->_array[i] << std::endl;
			if (i >= this->_n)
				throw Array::InvalidIndexException();
			return(this->_array[i]);
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