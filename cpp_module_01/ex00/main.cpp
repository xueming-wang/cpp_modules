/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:47:31 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/25 18:22:14 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    
    Zombie zombie1("zombie1");
    Zombie *zombie2 = newZombie("zombie2");

    zombie1.announce();
    zombie2->announce();
    randomChump("randow");
    
    delete zombie2;
    return 0;
}