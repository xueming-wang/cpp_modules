/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:09:01 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/05 15:04:01 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {

    std::cout << "create shrubbery-----------145, 137-----------" << std::endl;
     try {
        Bureaucrat b1("b1", 100);
        Intern someRandomIntern;
        Form*   rrf;

        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
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
    try {
        Bureaucrat b1("b1", 150);
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
    std::cout << "create robotomy-----------72, 45----------" << std::endl;
    try {
        Bureaucrat b2("b2", 45);
        Intern someRandomIntern;
        Form*   ddf;

        ddf = someRandomIntern.makeForm("robotomy request", "111");
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
    try {
        Bureaucrat b2("b2", 50);
        Intern someRandomIntern;
        Form*   ddf;

        ddf = someRandomIntern.makeForm("robotomy request", "111");
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
    std::cout << "create presidential-----------25, 5----------" << std::endl;
      try {
        Bureaucrat b3("b3", 5);
        Intern someRandomIntern;
        Form*   fff;

        fff = someRandomIntern.makeForm("presidential robotomy", "222");
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
    std::cout << std::endl;
    try {
        Bureaucrat b3("b3", 10);
        Intern someRandomIntern;
        Form*   fff;

        fff = someRandomIntern.makeForm("presidential robotomy", "222");
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