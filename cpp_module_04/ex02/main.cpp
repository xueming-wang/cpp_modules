/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:48 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/15 17:31:59 by xuwang           ###   ########.fr       */
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
   
    /*deep copy*/
    std::cout << "-------Deep copy------" << std::endl;
    Animal *copy = new Dog(*(Dog*)(animal[0])); //A copy of a Cat or Dog must be "deep".
    std::cout << std::endl;
    for(int i = 0; i < IDEAS_NUM; i++) {
         std::cout << ((Dog *)animal[0])->getBrain()->getIdea(i);
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < IDEAS_NUM; i++) {
        std::cout << ((Dog *)copy)->getBrain()->getIdea(i);
    }
    std::cout << std::endl;
    
    /* set idea*/
    for (int i = 0; i < IDEAS_NUM; i++) {
        ((Dog *)copy)->getBrain()->setIdea(":) ", i);  //i是第几个想法
    }
    std::cout << std::endl;
    for(int i = 0; i < IDEAS_NUM; i++) {
         std::cout << ((Dog *)animal[0])->getBrain()->getIdea(i);
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < IDEAS_NUM; i++) {
        std::cout << ((Dog *)copy)->getBrain()->getIdea(i);
    }
    std::cout << std::endl;
    
    /* animal et copy delete*/
    for (int i = 0; i < 4; i++){
        delete animal[i]; //should not create a leak
    }
    std::cout << std::endl;
    delete copy;
    system("leaks Animal");
    return 0;
}