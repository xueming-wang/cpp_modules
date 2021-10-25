/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:47:40 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/25 18:14:31 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {

    public:
        Zombie(std::string name);
        ~Zombie();
     
    void announce(void);

    private:
        std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif