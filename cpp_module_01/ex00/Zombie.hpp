/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:47:40 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/26 15:43:56 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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