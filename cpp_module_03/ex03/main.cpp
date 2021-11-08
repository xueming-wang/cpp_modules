/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:26:27 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/08 18:44:13 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    
    ClapTrap A("wang");
    ScavTrap B("target");
    FragTrap C("guys");

    A.attack(B.get_name());
    B.takeDamage(A.get_Attackdamage()); //amount = attackdamage
    B.guardGate();

    B.attack(A.get_name());
    A.takeDamage(B.get_Attackdamage());
    A.beRepaired(5);

    B.attack(C.get_name());
    C.takeDamage(B.get_Attackdamage());
    C.highFivesGuys();

    return (0);
}