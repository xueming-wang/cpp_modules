/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:34:07 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/17 18:31:00 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    
    Bureaucrat a("xuwang", 2);
    std::cout << "a is: " << a << std::endl;
    
    Bureaucrat b("you", 149);
    std::cout << "b is: " << b << std::endl;

    
    a.decGrade();
    std::cout << "2 - 1 = " << a.getGrade() << std::endl;

    
    b.incGrade();
    std::cout << "149 + 1 = " << b.getGrade() << std::endl;

    try
    {
        a.decGrade();
        std::cout << a << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "1 - 1 " << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        b.incGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "150 + 1 " << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat c("paul", 0);
    }
    catch(const std::exception& e)
    {
        std::cout << "paul's "; 
        std::cerr << e.what() << '\n';
    }
    return 0;
}