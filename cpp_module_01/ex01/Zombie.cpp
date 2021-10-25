/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:34:24 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/25 19:19:14 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    return;
}
Zombie::~Zombie(void){
    std::cout << this->_name << " delete"<< std::endl;
    return;
}
void    Zombie::setname(std::string name){
   this->_name = name;
}
void    Zombie::announce(void){
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}