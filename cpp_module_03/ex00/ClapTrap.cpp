/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:07:16 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/07 17:19:07 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ClapTrap <name> 攻击 <target>，造成 <damage> 点伤害！
// 构造函数和析构函数也必须显示一些东西

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {

    this->_name = name;
    this->_Hitpoints = 10; //生命值
    this->_EnergyPoints = 10; //能量点
    this->_AttackDamage = 0; //攻击伤害点
    std::cout << "ClapTrap constructor called" << std::endl;
    return;
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
        ///std::cout << "causing " <<  this->_AttackDamage << " points of damage!" << std::endl;
        // this->_EnergyPoints -= 1;
        // std::cout << "energy point left " << this->_EnergyPoints << std::endl;
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
    std::cout << this->_name << " repairing hit points: " << amount << std::endl;
    std::cout << this->_name << " have " << this->_Hitpoints << " hit points" << std::endl;
    std::cout << this->_name << " repairing energy points: " << amount << std::endl;
    std::cout << this->_name << " have " << this->_EnergyPoints << " energy points"<< std::endl;
    
}

std::string ClapTrap::get_name(void)const {
    return (this->_name);
}

int ClapTrap::get_AttackDamage(void) {
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