/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:08:52 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/30 18:43:42 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::bits = 8;

Fixed::Fixed(void) {
    this->_fixe = 0;
    std::cout << "Default constructor called" << std::endl;
     return;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
     return;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
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
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixe;
}

void Fixed::setRawBits(int const raw) {
    this->_fixe = raw;
    return;
}
