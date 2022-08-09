/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:49:12 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/09 18:04:38 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define END "\033[0m"

#define CYAN "\033[1;36m"
#define YELLOW "\033[1;33m"
#define MAGENTA "\033[1;35m"
#define WHITE "\033[1;37m"

#define LIGHTDARK "\033[1;90m"

template<typename T>
class	Array {

	public:
		Array( void ) { 

			std::cout << GREEN "Default constructor called." END << std::endl;
			this->_array = NULL;
			this->_n = 0;
			return;
		}
		Array( unsigned int n ) : _n(n) {

			std::cout << GREEN "Parametric constructor called." END << std::endl;
			this->_array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->_array[i] = 0; 
			return ;
		}
		Array( Array & src ) {
			
			std::cout << GREEN "Copy constructor called." END << std::endl;
			if (this != &src)
			{
				// if (this->_array)
				// 	delete (this->_array);
				this->_n = src._n;
				this->_array = new T[size()];
				for (unsigned int i = 0; i < src._n; i++)
					this->_array[i] = src._array[i];
			}

			return ;
		}
		~Array( void ) {
			
			std::cout << RED "Destructor called." END << std::endl;
			if (this->_array)
				delete [] (_array);
			return ;
		}
		
		unsigned int size( void ) {

			std::cout << CYAN "Size function called." END << std::endl;
			unsigned int i = this->_n;
			
			// for (i = 0; array[i] != '\0'; i++)
			// 	;
			return (i);
		}
		
		Array	&operator=( Array const & src ) {

			std::cout << CYAN "Operator = called." END << std::endl;
			if (this != &src)
			{
				if (this->_array)
					delete (this->_array);
				this->_n = src._n;
				this->_array = new T[size()];
				for (unsigned int i = 0; i < src._n; i++)
					this->_array[i] = src._array[i];
			}
			return(*this);
		}
		
		// specify which element is findable at tab[i] position
		T	&operator[]( unsigned int i ) {

			// std::cout << CYAN "Operator [] called." END << std::endl;
			if (i >= this->_n)
				throw Array::InvalidIndexException();
			return(this->_array[i]);
		}
		
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