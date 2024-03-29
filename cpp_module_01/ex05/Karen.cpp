/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:42:35 by xuwang            #+#    #+#             */
/*   Updated: 2023/11/08 19:20:02 by xuwang           ###   ########.fr       */
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
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
	std::cout << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
	std::cout << std::endl;
}

void Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}



void Karen::complain(std::string level) {
    
    _complain[0] = &Karen::debug;
      _complain[1] = &Karen::info;
        _complain[2] = &Karen::warning;
          _complain[3] = &Karen::error;
    
    std::string leVel[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    

    for(int i = 0; i < 4; i++) {
        if (leVel[i] == level) {
             (this->*_complain[i])();
            std::cout << std::endl;
            return ;
        }
    }
}
    
