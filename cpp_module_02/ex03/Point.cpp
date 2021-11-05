/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:39 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/04 19:09:43 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0){
    return ;    
}

Point::Point(Point const &src) {
     *this = src;
     return;
}

Point::Point(Fixed const x, Fixed const y): _x(x), _y(y){
    return;
}

Point::~Point() {
    return ;
}

Point   &Point::operator = (Point const &rhs) {  //把rhs里面的值赋予 当前
    if (this == &rhs)
        return *this;
   
    // int i =1;
    // int *p = &i;
    // *p = 2

	Fixed *x = (Fixed *)&this->_x;
	Fixed *y = (Fixed *)&this->_y;

	*x = rhs._x;
	*y = rhs._y;
    
    return *this;
}

Fixed Point::getX(void)const {
     return this->_x;
}

Fixed Point::getY(void)const {
    return this->_y;
}