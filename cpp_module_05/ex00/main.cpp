/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:34:07 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/17 17:01:10 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    
    Bureaucrat a("xuwang", 1);
    try
    {
        a.decGrade();
    }
    catch (std::exception & e) {

        std::cout << e.what() << std::endl;
    }
    return 0;
}