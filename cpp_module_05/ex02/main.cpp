/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:09:01 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/19 17:57:00 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    
    try {
        Bureaucrat  b1("b1", 1);
        ShrubberyCreationForm s1("target1");
        std::cout << s1 << std::endl;
    
        b1.executeForm(s1);
    }
    catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
    
    
    

    try
    {
           Bureaucrat b2("b2", 100);
           RobotomyRequestForm r2("target2");
           r2.execute(b2);
           b2.executeForm(r2);
    }
    catch (std::exception & e) {
       std::cerr << e.what() << std::endl;
    }
    
    try
    {
        Bureaucrat b3("b3", 100);
        PresidentialPardonForm p3("target3");
        p3.execute(b3);
        b3.executeForm(p3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}