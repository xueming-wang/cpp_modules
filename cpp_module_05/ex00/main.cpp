/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:34:07 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/03 19:30:37 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    
    Bureaucrat a("xuwang", 2);
    std::cout << "a is: " << a << std::endl;
    
    Bureaucrat b("paul", 149);
    std::cout << "b is: " << b << std::endl;

    
    a.incGrade();//niveau incrémenter
    std::cout << "2 - 1 = " << a.getGrade() << std::endl;

    
    b.decGrade();//niveau decrementer
    std::cout << "149 + 1 = " << b.getGrade() << std::endl;

    std::cout << "------test error niveau--------" << std::endl;
    try
    {
        a.incGrade();
    }
    catch (std::exception & e) {
        std::cout << "1 - 1 " << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        b.decGrade();
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