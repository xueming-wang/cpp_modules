/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:24:52 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/26 17:54:03 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

    private:
        Weapon  *_weapon; //ptr = NUll;
        std::string _name;
    
    public:
        HumanB(std::string name);
        ~HumanB(void);
        
    void attack(void);
    void setWeapon(Weapon &_weapon);
};

#endif