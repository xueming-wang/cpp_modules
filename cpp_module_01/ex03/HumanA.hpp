/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:24:47 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/30 14:03:01 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    
    private:
        Weapon  &_weapon;  //ref no NULL
        std::string _name;
    
    public:
        HumanA(std::string name, Weapon &weapon); 
        ~HumanA(void);
        
    void attack(void);
};

#endif