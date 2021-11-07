/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:26:27 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/07 18:47:38 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    
    ClapTrap A("wang");
    ScavTrap B("target");

    A.attack(B.get_name());
    B.takeDamage(A.get_Attackdamage()); //amount = attackdamage

    B.beRepaired(10);
    B.guardGate();

    B.attack(A.get_name());
    A.takeDamage(B.get_Attackdamage());
    A.beRepaired(5);

    return (0);
}