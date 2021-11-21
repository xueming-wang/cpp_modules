/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:09:01 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/21 15:26:50 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    
    std::cout << "creat Shrubbery-----------------" << std::endl;
    try {
        Bureaucrat  b1("b1", 1);
        std::cout << b1 << std::endl;
        ShrubberyCreationForm s1("target1");
        std::cout << s1;
        b1.signForm(s1);
        b1.executeForm(s1);
    }
    catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
    
    std::cout << std::endl;
    std::cout << "creat Robotomy-----------------" << std::endl;
    try
    {
        Bureaucrat b2("b2", 10);
        std::cout << b2 << std::endl;
        RobotomyRequestForm r2("target2");
        std::cout << r2;
        b2.signForm(r2);
        b2.executeForm(r2);
    }
    catch (std::exception & e) {
       std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "creat Presidential-----------------" << std::endl;
    try
    {
        Bureaucrat b3("b3", 100);
        std::cout << b3 << std::endl;
        PresidentialPardonForm p3("target3");
        std::cout << p3;
        b3.signForm(p3);
        b3.executeForm(p3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}