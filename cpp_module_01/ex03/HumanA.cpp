/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:24:44 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/30 14:08:49 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
    _name(name),
    _weapon(weapon) {
    return;
}

HumanA::~HumanA() {
    return;
}

void    HumanA::attack() {
    
    std::cout << this->_name << " attacks with his ";
    std::cout << _weapon.getType() << std::endl; //ref not use &
}
