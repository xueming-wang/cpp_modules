/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:14:09 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/06 13:00:08 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void){}

Base * generate(void){
    
    int i = rand() % 3; //Retour aléatoire
    std::cout << rand() << std::endl;
    if (i == 1)
        return new A();
    else if (i == 0)
        return new B();
    else 
        return new C();
}

void identify_ptr(Base * p){ //check p is A/B/C
   
    if (dynamic_cast<A *>(p) != NULL) //Conversion réussie
        std::cout << "A" << std::endl;
    if (dynamic_cast<B *>(p) != NULL)
        std::cout << "B" << std::endl;
    if (dynamic_cast<C *>(p) != NULL)
        std::cout << "C" << std::endl;
}
void identify_ref(Base & p){ //check reussie not NULL
    try {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast &bc) {
        std::cout <<  "A " << bc.what() << std::endl;
    }
    
    try {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch (std::bad_cast &bc) {
        std::cout <<  "B: " << bc.what() << std::endl;
    }
    
    try {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch (std::bad_cast &bc) {
        std::cout <<  "C: " << bc.what() << std::endl;
    }
    
}