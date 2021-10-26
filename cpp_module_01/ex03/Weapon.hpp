/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:24:58 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/26 16:42:23 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
           std::string _type;
           
    public:
        Weapon(std::string type);
        ~Weapon(void);

    std::string const &getType(void)const;
    void    setType(const std::string &type);
};

#endif