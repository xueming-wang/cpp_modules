/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:14:09 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/24 16:23:37 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void){}

Base * generate(void){
    
    int i = rand() % 3;
    if (i == 1)
        return new A();
    else if (i == 0)
        return new B();
    else 
        return new C();
}

void identify_ptr(Base * p){
   
    Base *base;
    
    if ((base = dynamic_cast<A *>(p)) != NULL)  //不等于null说明转换成功
        std::cout << "A" << std::endl;
    if ((base = dynamic_cast<B *>(p))!= NULL)
        std::cout << "B" << std::endl;
    if ((base = dynamic_cast<C *>(p)) != NULL)
        std::cout << "C" << std::endl;
}
void identify_ref( Base & p){
    try {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast &bc) {
        std::cout <<  "A " << bc.what() << std::endl;
    }
    try {
        B &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
    }
    catch (std::bad_cast &bc) {
        std::cout <<  "B: " << bc.what() << std::endl;
    }
    try {
        C &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    }
    catch (std::bad_cast &bc) {
        std::cout <<  "C: " << bc.what() << std::endl;
    }
    
}