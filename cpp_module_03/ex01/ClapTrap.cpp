/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:26:21 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/07 18:51:31 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
    //this->_name = "Unknow";
    this->_Hitpoints = 10; //生命值
    this->_EnergyPoints = 10; //能量点
    this->_AttackDamage = 0; //攻击伤害点
    std::cout << "ClapTrap constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) {

    this->_name = name;
    this->_Hitpoints = 10;
    this->_EnergyPoints = 10; 
    this->_AttackDamage = 0;
    std::cout << "ClapTrap constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "assignment constructor" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
    return;
}

void ClapTrap::attack(std::string const & target) {
    if (this->_EnergyPoints <= 0)
        std::cout << this->_name << " doesn't have energy point" << std::endl;
    else {
        std::cout << "ClapTrap " << this->_name << " attack " << target << "," ;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
  
    std::cout << " causing " << amount << " points of damage" << std::endl;    
    this->_Hitpoints -= amount;
    if (this->_Hitpoints <= 0)
        std::cout << this->_name << " is died" << std::endl;
    else
       std::cout << this->_name << " hit point left: " << this->_Hitpoints << std::endl;
}
        
void ClapTrap::beRepaired(unsigned int amount) {
    this->_Hitpoints += amount;
    this->_EnergyPoints += amount;
    std::cout << this->_name << " repairing hit points and energy points: " << amount << std::endl;
    if (this->_Hitpoints > 0) 
        std::cout << this->_name << " have " << this->_Hitpoints << " hit points" << std::endl;
    else
        std::cout << this->_name << " hitpoint <=0 , is died!! " <<  std::endl;
    std::cout << this->_name << " have " << this->_EnergyPoints << " energy points"<< std::endl;
}

std::string ClapTrap::get_name(void)const {
    return (this->_name);
}

int  ClapTrap::get_Attackdamage(void) {
    return (this->_AttackDamage);
}

ClapTrap &ClapTrap::operator = (ClapTrap const &rhs) {
    
    if (this == &rhs)
        return *this;
    this->_name = rhs._name;
    this->_Hitpoints = rhs._Hitpoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return *this;
}