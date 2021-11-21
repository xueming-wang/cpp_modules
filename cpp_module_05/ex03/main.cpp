/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:09:01 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/21 19:14:31 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {

    std::cout << "create shrubbery------------------------" << std::endl;
    try {
        Bureaucrat b1("b1", 100);
        Intern someRandomIntern;
        Form*   rrf;

        rrf = someRandomIntern.makeForm("shrubbery creation", "shrubbery");
        if (rrf)
        {
            b1.signForm(*rrf);
            b1.executeForm(*rrf);
            delete rrf;
        }
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
	}
    
    std::cout << std::endl;
    std::cout << "create robotomy------------------------" << std::endl;
    try {
        Bureaucrat b2("b2", 45);
        Intern someRandomIntern;
        Form*   ddf;

        ddf = someRandomIntern.makeForm("robotomy request", "robotomy");
        if (ddf)
        {
            b2.signForm(*ddf);
            b2.executeForm(*ddf);
            delete ddf;
        }
    }
    catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
    
    std::cout << std::endl;
    std::cout << "create presidential------------------------" << std::endl;
    try {
        Bureaucrat b3("b3", 10);
        Intern someRandomIntern;
        Form*   fff;

        fff = someRandomIntern.makeForm("presidential robotomy", "shrubbery");
        if (fff)
        {
            b3.signForm(*fff);
            b3.executeForm(*fff);
            delete fff;
        }
    }
    catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

    
    return 0;
}