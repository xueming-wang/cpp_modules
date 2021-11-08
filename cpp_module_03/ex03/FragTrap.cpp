/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:28:00 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/08 19:48:55 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Unknow"){
    
    this->_Hitpoints = 100; 
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    
    this->_Hitpoints = 100; 
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const &src) {
    std::cout << "FragTrap assignment constructor" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destructor called" << std::endl;
    return;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap" << this->_name << " wanna high fives guys?" << std::endl;
}

FragTrap &FragTrap::operator = (FragTrap const &rhs) {
    
    if (this == &rhs)
        return *this;
    this->_name = rhs._name;
    this->_Hitpoints = rhs._Hitpoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return *this;
}

void    FragTrap::get_HP(void) {
    this->_Hitpoints = 100;
}
void    FragTrap::get_EP(void) {
    this->_EnergyPoints = 100;
}
void    FragTrap::get_AD(void) {
    this->_AttackDamage = 30;
}