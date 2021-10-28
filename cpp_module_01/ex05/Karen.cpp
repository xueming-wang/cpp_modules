/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:42:35 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/28 15:13:57 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

// void (Karen::*complain)(void) {  //参数 返回值

//     // complain = Karen::debug;
//     // complain[1] = &Karen::info;
//     // complain[2] = &Karen::warnin;
//     // complain[3] = &Karen::error;
    
//     return ;
// }

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
    if (level == leVel[0]) {
        std::cout << "DEBUG" << std::endl;
        (this->*_complain[0])();
    }
    else if (level == leVel[1]) {
         std::cout << "INFO" << std::endl;
         (this->*_complain[1])();
    }
     else if  (level == leVel[2]){
          std::cout << "WARNING" << std::endl;
        (this->*_complain[2])();
     }
    else if  (level == leVel[3]) {
         std::cout << "ERROR" << std::endl;
         (this->*_complain[3])();
    }
}
    
    
   
    // for(int i = 0; i < 4; i++){
    //     if (complain[i] == level) {
    //         this->*complain[i]();
    //         std::cout << std::endl;
	// 		return ;
    //     }
    // }
    // levelPtr = level;
