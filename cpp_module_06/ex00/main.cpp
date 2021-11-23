/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:40:13 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/23 18:44:56 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av) {
    
    
    if (ac != 2) {
        std::cout << "./Convert [args]" << std::endl; 
        return (1);
    }
    std::string str = av[1];
    
    Convert convert(str);
    convert.printlist();
    return 0;
}