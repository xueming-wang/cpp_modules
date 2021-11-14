/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:23:25 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/14 18:44:49 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main() {

    Animal  *animal[4];
    /*creat animal*/
    for(int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            const animal[i] = new Dog();
        else
            const animal[i] = new Cat();
    }
    
    std::cout << std::endl;

    for (int j = 0; j < 4; j++)
        delete  animal[j];
}