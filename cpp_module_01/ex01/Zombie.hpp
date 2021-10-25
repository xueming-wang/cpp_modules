/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:33:39 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/25 19:43:11 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {

    public:
        Zombie();
        ~Zombie();
     
    void announce(void);
    void setname(std::string name);

    private:
        std::string _name;

};

Zombie* zombieHorde( int N, std::string name);

#endif
