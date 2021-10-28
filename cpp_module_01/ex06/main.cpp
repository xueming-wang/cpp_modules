/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:43:05 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/28 16:55:50 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av) {

    if (ac != 2){
        std::cout << "[Set level]" << std::endl; 
        return (1);
    }
    
    Karen KarenFilter;
    KarenFilter.complain(av[1]);
    return (0);
}