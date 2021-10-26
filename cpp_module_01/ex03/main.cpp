/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:24:29 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/26 17:53:18 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        Weapon        club = Weapon("crude spiked club"); 
        
        HumanA bob("Bob", club); //with &ref 
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon        club = Weapon("crude spiked club");
        
        HumanB jim("Jim"); //with ptr
        jim.setWeapon(club); 
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}

