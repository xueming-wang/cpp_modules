/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:43:03 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/02 20:24:05 by xuwang           ###   ########.fr       */
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
    this->_name = src._name; 
    for(int i = 0; i < INVENTORY; i++) {  //* deep copy 
        if (src._amatria[i]) {
               this->_amatria[i] = src._amatria[i]->clone(); //return new
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
    if (!m)
        std::cout << "Amateria " << m << " no exist! " << std::endl;
    for (int i = 0; i < INVENTORY; i++) {
        if (!this->_amatria[i]) {
            this->_amatria[i] = m; //equip one amatetria
            return;
        }
    }  
    if (this->_amatria[3])
        std::cout << "Amateria can't equipe, inventory is full " << std::endl; 
}

void Character::unequip(int idx) {
    if(idx < 0 || idx >= INVENTORY)
        std::cout << "idx is wrong !" << std::endl;
    if (this->_amatria[idx])
        this->_amatria[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if(idx < 0 || idx >= INVENTORY)
        std::cout << "idx is wrong !" << std::endl;
    else {
        if (this->_amatria[idx])
            this->_amatria[idx]->use(target); //get info de user of idex
        else
            std::cout << "ERROR :idx is empty!" << std::endl;
    }
}

