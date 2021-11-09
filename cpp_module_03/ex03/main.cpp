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

#include "DiamondTrap.hpp"

int main() {
   
   
   DiamondTrap a("wang");
   
   a.whoAmI();
   a.attack("kang");
   a.beRepaired(5);
   a.guardGate();
   a.highFivesGuys();

    return (0);
}