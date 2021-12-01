/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:26:27 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/01 18:56:34 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
   
   DiamondTrap a("wang");
   
   a.whoAmI();
   a.attack("kang");
   std::cout << std::endl;
   
   a.beRepaired(5);
   a.guardGate();
   a.highFivesGuys();
   std::cout << std::endl;

    return (0);
}