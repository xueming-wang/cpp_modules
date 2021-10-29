/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:08:52 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/29 18:16:14 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*于是人们想出一种方法，即约定计算机中小数点的位置，且这个位置固定不变，小数点前、后的数字，分别用二进制表示，
//然后组合起来就可以把这个数字在计算机中存储起来，这种表示方式叫做「定点」表示法，用这种方法表示的数字叫做「定点数
也就是说「定」是指固定的意思，「点」是指小数点，小数点位置固定即定点数名字的由来 */
// 既然定点数只是表示数字的一种方式，那试想，它可以表示整数吗？可以表示小数吗？
// 答案是肯定的。
// 定点数如果要表示整数或小数，分为以下三种情况：
// 纯整数：例如整数100，小数点其实在最后一位，所以忽略不写 100 = 01100100（二进制）
// 纯小数：例如：0.123，小数点固定在最高位 0.125 = 0.001000000（二进制）
// 整数+小数：例如1.24、10.34，小数点在指定某个位置  
//数字 1.5用定点数表示 1.5 = 00001 100（二进制 预定前五位表示整数 后3位表示小数）
//数字 25.125 用定点数 2.5 = 11001 001
//原码就是这个数本身的二进制形式。
#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->valeur = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &a) {
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Fixed &Fixed::operator = (Fixed const &b) {

    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(b.getRawBits()); //set raw de b to this
    return *this;
}
int Fixed::getRawBits(void)const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->valeur;
}

void Fixed::setRawBits(int const raw) {
    this->valeur = raw;
}