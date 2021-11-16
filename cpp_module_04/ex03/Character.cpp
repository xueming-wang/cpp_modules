/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:43:03 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/16 15:37:16 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("Unknow"){
    for(int i = 0; i < INVENTORY; i++)
        this->_amatria[i] = NULL;
}

Character::Character(std::string const &name): _name(name) {
    for(int i = 0; i < INVENTORY; i++)
        this->_amatria[i] = NULL;
}

Character::Character(Character const &src) {
    this->_name = src._name; //浅拷贝
    for(int i = 0; i < INVENTORY; i++) {  //带* 深拷贝
        if (src._amatria[i]) {
               this->_amatria[i] = src._amatria[i]->clone(); //取得src的ametria运行返回一个new
        }
    }
}

Character::~Character(void) {
     for(int i = 0; i < INVENTORY; i++) {
         if (this->_amatria[i]) {
            delete this->_amatria[i];
          this->_amatria[i] = NULL;
         }
     }
}

Character &	Character::operator=(Character const & rhs) {
    if (this == &rhs) 
        return *this;
    this->_name = rhs._name;
    for(int i = 0; i < INVENTORY; i++) {
        if (this->_amatria[i])
            delete this->_amatria[i];
        if (rhs._amatria[i])
            this->_amatria[i] = rhs._amatria[i]->clone();
    }
    return *this;
}

std::string const & Character::getName() const {
    return (this->_name);
}
void Character::equip(AMateria* m) {
    
}
void Character::unequip(int idx) {}
void Character::use(int idx, ICharacter& target) {}