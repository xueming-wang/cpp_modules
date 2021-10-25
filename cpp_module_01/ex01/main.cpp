/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:34:06 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/25 19:43:56 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    
    Zombie *zombie = zombieHorde(5, "zombie1");
    for(int i = 0; i < 5; i++) {
        std::cout << "Zombie [ " << i << " ]";
        zombie[i].announce(); 
    }
    delete[] zombie;
    return (0);    
}