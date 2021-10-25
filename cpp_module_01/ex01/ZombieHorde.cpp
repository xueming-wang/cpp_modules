/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:34:32 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/25 19:47:13 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){

    Zombie *zombieHorde = new Zombie[N];

    for (int i = 0; i < N; i++) {

        zombieHorde[i].setname(name);
    }
    return (zombieHorde);
}