/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:31:21 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/28 17:47:25 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template < typename T >
class Array {
    public:
        Array<T>(void) {
            this->_array = new T[0];
            this->_n = 0;
        };
        Array<T>(unsigned int n) {
            this->_array = new T[n];
            this->_n = n;
        }
        Array<T>(Array const & src) {
            this->_array = new T[src.n()]; //creat _n of type T
            this->_n = src.n();
            for(unsigned int i; i < this->_n; i++)
                this->_array[i] = src._array[i]; 
        }
        
        ~Array<T>(void){
            if (this->_array)
                delete[] this->_array;
        }

        Array<T> &operator=(Array const &rhs){
             if (this == &rhs)
                return *this;
            this->_array = new T[rhs.n()];
            this->_n = rhs.n();
              for(unsigned int i = 0; i < this->_n; i++)
                this->_array[i] = rhs._array[i]; 
            return *this;
        }
 
        T &operator[](unsigned int index){   //chose one of array
            if (index >= this->_n)
                throw Array::IndexIsLimite();
            return(this->_array[index]);
        }

        unsigned int const& n(void) const {
            return this->_n;
        }

        class IndexIsLimite:public std::exception {
                const char * what () const throw() { return "Indxt is limite!";}
        };        
    private:
        T *_array; //import quell type of array 
        unsigned int _n;
    
};
#endif