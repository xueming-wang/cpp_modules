/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:09:18 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/03 20:53:56 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    
    Bureaucrat  b1("b1", 1);
    std::cout << b1 << std::endl;
    
    Bureaucrat  b2("b2", 100);
    std::cout << b2 << std::endl;

    Form f1("f1", 100, 50);
    std::cout << f1;

    Form f2("f2", 70, 20);
    std::cout << f2;

    b1.signForm(f1);
    b1.signForm(f2);
    b2.signForm(f1);
    b2.signForm(f2);

    std::cout << "check assigned f2 == 100" << std::endl;
    f2 = f1;  //change signegrade is 70
    b2.signForm(f2);

    
    std::cout << std::endl;
    std::cout << "-------------Exceptin test-----------" << std::endl;
    try
    {
           Bureaucrat B1("B1", 80);
           std::cout << B1 << std::endl;

           Form F1("F1", 50, 10);
           B1.signForm(F1);  //B1 == 80 
    }
    catch (std::exception & e) {
       std::cerr << e.what() << std::endl;
    }
     std::cout << "--------check wrong form------------" << std::endl;
    try
    {
        Form F2("F2", -1, 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}