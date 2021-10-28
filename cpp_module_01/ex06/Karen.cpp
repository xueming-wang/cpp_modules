/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:43:01 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/28 17:59:48 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
    return;
}

Karen:: ~Karen() {
    return ;
}

void	Karen::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. " << std::endl;
    std::cout << "I just love it!";
	std::cout << std::endl << std::endl;
}

void	Karen::info(void) {
    std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. " << std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!";
	std::cout << std::endl << std::endl;
}

void	Karen::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month.";
	std::cout << std::endl << std::endl;
}

void Karen::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl << std::endl;
}



void Karen::complain(std::string level) {
    
    _complain[0] = &Karen::debug;
    _complain[1] = &Karen::info;
    _complain[2] = &Karen::warning;
    _complain[3] = &Karen::error;
    
    std::string leVel[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0; 
    while (i < 4 && (leVel[i] != level))
        i++;
    switch (i)
    {
        case (0):
            (this->*_complain[i++])();
        case (1):
            (this->*_complain[i++])();
        case (2):
            (this->*_complain[i++])();
        case (3):
            (this->*_complain[i++])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    
}