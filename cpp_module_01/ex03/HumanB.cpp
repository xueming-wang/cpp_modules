/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:24:49 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/30 14:07:46 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
//#define NULL 0
HumanB::HumanB(std::string name):_name(name) {
    
    _weapon = NULL;
    return;
}

HumanB::~HumanB() {
    return;
}

void HumanB::setWeapon(Weapon &_weapon) {
    this->_weapon = &_weapon;
}

void    HumanB::attack() {
    
    if (this->_weapon == NULL)
        return;
    std::cout << this->_name << " attacks with his ";
    std::cout << _weapon->getType() << std::endl; //adr
}
