/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:06:47 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/02 14:37:52 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main() {
{    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
  
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
}
{
    std::cout << std::endl;
    std::cout << "without virtual" << std::endl;
    std::cout << std::endl;

    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* j = new WrongDog();
    const WrongAnimal* i = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
  
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
}
    return 0;
}