/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:24:56 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/26 16:04:22 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->_type = type;
    return;
}

Weapon::~Weapon() {
    return;
}

std::string const  &Weapon::getType(void)const{  //no
    return this->_type;
}

void    Weapon::setType(const std::string &type){
    this->_type = type;
}


