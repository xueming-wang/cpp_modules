/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:23:25 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/15 16:17:06 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main() 
{
    Animal *animal[4];
    
    for (int i = 0; i < 4; i++){
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
    for (int i = 0; i < 4; i++){
            animal[i]->makeSound();
    }
    std::cout << std::endl;
    for(int i = 0; i < 3; i++) {
         std::cout << ((Dog *)animal[0])->getBrain()->getIdea(i);
    }
    std::cout << std::endl;
    
    /*deep copy*/
    std::cout << "-------Depp copy------" << std::endl;
        
    Animal *copy = new Dog(*(Dog*)(animal[0]));
    std::cout << std::endl;
    
    for(int i = 0; i < 3; i++) {
        std::cout << ((Dog *)copy)->getBrain()->getIdea(i);
    }
    ((Dog *)copy)->getBrain()->setIdea(":) \n", 0);  //i是第几个想法
    ((Dog *)copy)->getBrain()->setIdea(":( \n", 1);
    
    std::cout << "animal[0] is: " << animal[0]->getType() << std::endl;
    std::cout << ((Dog *)copy)->getBrain()->getIdea(0);
    std::cout << ((Dog *)copy)->getBrain()->getIdea(1);    
    /* animal et copy delete*/
    for (int i = 0; i < 4; i++){
        delete animal[i]; //should not create a leak
    }
    std::cout << std::endl;
    delete copy;
    return 0;
}