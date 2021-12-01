/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:27:28 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/01 17:33:32 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Unknow"){
    
    this->_Hitpoints = 100; 
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    
    this->_Hitpoints = 100; 
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
    std::cout << "ScavTrap assignment constructor" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called" << std::endl;
    return;
}

void ScavTrap::attack(std::string const &target){
    if (this->_EnergyPoints <= 0)
        std::cout << this->_name << " doesn't have energy point" << std::endl;
    else {
        std::cout << "ScavTrap " << this->_name << " ATTACK " << target << "," ;
    }
}
void ScavTrap::guardGate() {
    std::cout << this->_name << " is in Gate keeper mode.!" << std::endl;
}

ScavTrap &ScavTrap::operator = (ScavTrap const &rhs) {
    
    if (this == &rhs)
        return *this;
    this->_name = rhs._name;
    this->_Hitpoints = rhs._Hitpoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return *this;
}