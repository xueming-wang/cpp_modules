/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:27:28 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/09 15:50:18 by xuwang           ###   ########.fr       */
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

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode.!" << std::endl;
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

void    ScavTrap::get_HP(void) {
    this->_Hitpoints = 100;
}
void    ScavTrap::get_EP(void) {
    this->_EnergyPoints = 50;
}
void    ScavTrap::get_AD(void) {
    this->_AttackDamage = 20;
}