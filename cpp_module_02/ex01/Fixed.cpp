/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:04 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/04 14:54:32 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::bits = 8;

Fixed::Fixed(void): _fixe(0){
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const int i):_fixe(i << Fixed::bits) {  // int a fixe 8位形式 后加0例如 1变成1.00000000
    std::cout << "Int constructor called" << std::endl;
     return;
}

Fixed::Fixed(const float f):_fixe(roundf(f * ((float)(1 << Fixed::bits)))){  //round 四舍五入先乘以256
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
    this->_fixe = rhs.getRawBits();
    //this->setRawBits(rhs.getRawBits()); //set raw de b to this
    return *this;
}

int Fixed::getRawBits(void)const {
    return this->_fixe;
}

void Fixed::setRawBits(int const raw) {
    this->_fixe = raw;
    return;
}

// un nombres à point fixe en float.
float Fixed::toFloat(void) const {
    return(((float)this->_fixe) / (float)(1 << Fixed::bits));   //除256
}
// nombres à point fixe en int.
int Fixed::toInt(void) const {
    return( this->_fixe >> Fixed::bits); 
}

std::ostream &operator << (std::ostream &o, Fixed const &a){ //output stream  print class
    
    o << a.toFloat(); 
    return o;
}
