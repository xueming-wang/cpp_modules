/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:19 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/03 19:36:33 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
//如果使用前缀形式，则会在表达式计算之前完成自增或自减，如果使用后缀形式，则会在表达式计算之后完成自增或自减。
int main(void) { 
    
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl; //先++ 再运算
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;  //先运算 在++
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

return 0; }