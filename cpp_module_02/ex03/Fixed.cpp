/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:28 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/04 19:03:26 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int const Fixed::bits = 8;
/* 
**CONSTRUCTORS / DESTRUCTOR
*/
Fixed::Fixed(void): _fixe(0){
    return;
}

Fixed::Fixed(const int i):_fixe(i << Fixed::bits) {  //8位形式 后加0例如 1变成1.00000000
     return;
}
//fixed_point_value = round(floating_point_value * scaling_factor) 2^8
Fixed::Fixed(const float f):_fixe(roundf(f * ((float)(1 << Fixed::bits)))){  //先乘以256
      return;
}
 
Fixed::Fixed(Fixed const &src) {
    *this = src;
     return;
}

Fixed::~Fixed(void) {
     return;
}

/*
** MEMBERS
*/
int Fixed::getRawBits(void)const {
    return this->_fixe;
}

void Fixed::setRawBits(int const raw) {
    this->_fixe = raw;
    return;
}
//floating_point_value = ((float)fixed_point_value)/scaling_factor
float Fixed::toFloat(void) const {
    return(((float)this->_fixe) / (float)(1 << Fixed::bits));   //除256
}

int Fixed::toInt(void) const {
    return( this->_fixe >> Fixed::bits); 
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b){
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b){
    if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}
Fixed &Fixed::min(Fixed & a, Fixed & b) {
	if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed & a, Fixed & b) {
	if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}

/*
** OPERATORS
*/

bool Fixed::operator>(Fixed const & rhs) const {
    return (this->getRawBits() > rhs.getRawBits());
}
bool Fixed::operator<(Fixed const & rhs) const {
    return (this->getRawBits() < rhs.getRawBits());
}
bool Fixed::operator>=(Fixed const & rhs) const{
    return (this->getRawBits() >= rhs.getRawBits());
}
bool Fixed::operator<=(Fixed const & rhs) const{
    return (this->getRawBits() <= rhs.getRawBits());
}
bool Fixed::operator==(Fixed const & rhs) const{
    return (this->getRawBits() == rhs.getRawBits());
}
bool Fixed::operator!=(Fixed const & rhs) const{
    return (this->getRawBits() != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const & rhs) const{
    Fixed tmp(this->toFloat());
    tmp =  Fixed(this->toFloat()+ rhs.toFloat());
    return tmp;
}
Fixed Fixed::operator-(Fixed const & rhs) const{
    Fixed tmp(this->toFloat());
    tmp = Fixed(this->toFloat() - rhs.toFloat());
    return tmp;
}
Fixed Fixed::operator*(Fixed const & rhs) const{
    Fixed tmp(this->toFloat());
    tmp =  Fixed(this->toFloat() * rhs.toFloat());
    return tmp;
}
Fixed Fixed::operator/(Fixed const & rhs) const{
    Fixed tmp(this->toFloat());
    tmp =  Fixed(this->toFloat() / rhs.toFloat());
    return tmp;
}

Fixed &Fixed::operator=(Fixed const &rhs) {

    if (this == &rhs)
        return *this;
    this->_fixe = rhs.getRawBits();
    //this->setRawBits(rhs.getRawBits()); //set raw de b to this
    return *this;
}

Fixed   &Fixed::operator++(void){   /* PRE INCREMENT */
    this->_fixe += 1;
    return *this;
}

Fixed   Fixed::operator++(int){  /* POST INCREMENT */
    Fixed tmp = *this;
    _fixe += 1;
    return (tmp);
}
Fixed   &Fixed::operator--(void){  /* PRE DECREMENT */
    this->_fixe -= 1;
    return *this;
}

Fixed   Fixed::operator--(int){  /* POST DECREMENT */
    Fixed tmp = *this;
    this->_fixe -= 1;
    return (tmp);
}

std::ostream &operator << (std::ostream &o, Fixed const &a){
    
    o << a.toFloat(); //show le nombre a x = x.getRawbites();
    return o;
}