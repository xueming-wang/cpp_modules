/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:31:21 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/06 19:35:46 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template < typename T >
class Array {
    private:
        T *_array;
        unsigned int _size;
    
    public:
        Array<T>(void) {
            this->_array = new T[0];
            this->_size = 0;
        };
        Array<T>(unsigned int n) {
            this->_array = new T[n];
            this->_size = n;
        }
        Array<T>(Array const & src) {
            /* deep copy :modifying one of the two arrays after copy
             won’t affect anything in the other array.*/
            this->_array = new T[src.size()];
            this->_size = src.size();
            for(unsigned int i = 0; i < this->_size; i++)
                this->_array[i] = src._array[i]; 
        }

        Array<T> &operator=(Array const &rhs){
             if (this == &rhs)
                return *this;
            this->_array = new T[rhs.size()];
            this->_size = rhs.size();
              for(unsigned int i = 0; i < this->_size; i++)
                this->_array[i] = rhs._array[i]; 
            return *this;
        }
           
        ~Array<T>(void){
            if (this->_array)
                delete[] this->_array;
        }
 
        T &operator[](unsigned int index){   //chose one of array
            if (index >= this->_size)
                throw Array::IndexIsLimite();
            return(this->_array[index]);
        }

        unsigned int const& size(void) const {
            return this->_size;
        }

        class IndexIsLimite:public std::exception {
                const char * what () const throw() 
                { return "ERROR: Indxt is limite!";}
        };        
    
};
#endif