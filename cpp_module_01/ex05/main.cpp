/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:42:41 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/28 15:13:42 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

// void	debug(void) {
// 	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
// 	std::cout << std::endl;
// }

int main() {

	Karen karen;
	karen.complain("DEBUG");
	karen.complain("INFO");

	karen.complain("WARNING");
	karen.complain("ERROR");
	
    // void (*ptr)() = debug;
	// ptr();
    return (0);
    
}