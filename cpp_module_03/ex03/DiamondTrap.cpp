/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:48:26 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/01 17:46:13 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ScavTrap(), FragTrap(){
    this->ClapTrap::_name = "Unknow_clap_name";
    this->_name = "Unknow";
    FragTrap::get_HP();
    ScavTrap::get_EP();
    FragTrap::get_AD();
    std::cout << "DiamondTrap constructor called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name){
    this->ClapTrap::_name = name + "_clap_name";
    this->_name = name;
    FragTrap::get_HP();
    ScavTrap::get_EP();
    FragTrap::get_AD();
    std::cout << "DiamondTrap constructor called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {
    std::cout << "DiamondTrap assignment constructor" << std::endl;
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap destructor called" << std::endl;
    return;
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap name is: " << this->_name << std::endl;
    std::cout << "ClapTrap name is: " << this->ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(std::string const & target) {
   ScavTrap::attack(target);
}

DiamondTrap &DiamondTrap::operator = (DiamondTrap const &rhs) {
    
    if (this == &rhs)
        return *this;
    this->_name = rhs._name;
    this->_Hitpoints = rhs._Hitpoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return *this;
}