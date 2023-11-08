/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:34:06 by xuwang            #+#    #+#             */
/*   Updated: 2023/11/08 19:19:28 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *zombie_horde = zombieHorde(5, "xuwang");
    
    for(int i = 0; i < 5; i++) {
        std::cout << "Zombie [ " << i << " ]";
        zombie_horde[i].announce(); 
    }
    delete[] zombie_horde;
    return (0);    
}