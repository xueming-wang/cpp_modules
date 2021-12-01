/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:04 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/30 21:08:05 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::bits = 8;

Fixed::Fixed(void): _fixe(0){
    std::cout << "Default constructor called" << std::endl;
    return;
}


Fixed::Fixed(const int i):_fixe(i << Fixed::bits) {  
    std::cout << "Int constructor called" << std::endl;
     return;
}

 //(arrondis) point fixe f*(float)256
Fixed::Fixed(const float f):_fixe(roundf(f * ((float)(1 << Fixed::bits)))){  
     std::cout << "Float constructor called" << std::endl;
      return;
}
 
Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
     return;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
     return;
}

Fixed &Fixed::operator = (Fixed const &rhs) {

    std::cout << "Assignation operator called" << std::endl;
    if (this == &rhs)
        return *this;
    //this->_fixe = rhs.getRawBits();
    this->setRawBits(rhs.getRawBits()); //set raw de b to this
    return *this;
}

int Fixed::getRawBits(void)const {
    return this->_fixe;
}

void Fixed::setRawBits(int const raw) {
    this->_fixe = raw;
    return;
}


float Fixed::toFloat(void) const {
    return(((float)this->_fixe) / (float)(1 << Fixed::bits));
}

// value point fixe to int.
int Fixed::toInt(void) const {
    return( this->_fixe >> Fixed::bits); 
}

 //output stream  print class
std::ostream &operator<<(std::ostream &o, Fixed const &a){
    o << a.toFloat(); 
    return o;
}
