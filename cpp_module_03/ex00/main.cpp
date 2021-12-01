/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:07:13 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/01 18:43:31 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    
    ClapTrap A("wang");
    ClapTrap B("abc");
    
    A.attack(B.get_name());
    B.takeDamage(5);
    A.beRepaired(7);
    return (0);
}