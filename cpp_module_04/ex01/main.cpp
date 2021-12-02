/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:23:25 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/02 17:02:07 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main() 
{
    Animal *animal[4];
    /* 4 brans created, 2 dog , 2cat */
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
   
    /*deep copy mallco new place ，no change  the data the origin address*/
    std::cout << "-------Deep copy------" << std::endl;
    Animal *copy = new Dog(*(Dog*)(animal[0])); //deep copy use assignment constructeur
    std::cout << std::endl;

    std::cout << "100ideas of dog" << std::endl;
    for(int i = 0; i < IDEAS_NUM; i++) {
         std::cout << ((Dog *)animal[0])->getBrain()->getIdea(i);
    }
    std::cout << std::endl<< std::endl;
    
    std::cout << "100ideas of copy" << std::endl;
    for(int i = 0; i < IDEAS_NUM; i++) {
        std::cout << ((Dog *)copy)->getBrain()->getIdea(i); 
    }
    std::cout << std::endl << std::endl;
    
    /* set idea*/
    std::cout << "----set idea-----" << std::endl;
    for (int i = 0; i < IDEAS_NUM; i++) {
        ((Dog *)copy)->getBrain()->setIdea(":) ", i);
    }
    std::cout << std::endl;
    
    std::cout << "100ideas of dog" << std::endl;
    for(int i = 0; i < IDEAS_NUM; i++) {
         std::cout << ((Dog *)animal[0])->getBrain()->getIdea(i);
    }
    std::cout << std::endl << std::endl;
    
    std::cout << "100ideas of copy" << std::endl;
    for(int i = 0; i < IDEAS_NUM; i++) {
        std::cout << ((Dog *)copy)->getBrain()->getIdea(i);
    }
    std::cout << std::endl << std::endl;
    
    /* animal et copy delete*/
    for (int i = 0; i < 4; i++){
        delete animal[i];
    }
    delete copy;
    std::cout << std::endl << std::endl;
    system("leaks Animal");
    return 0;
}