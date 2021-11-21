/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:20:22 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/21 19:09:52 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void){}

Intern::Intern(Intern const &src) { *this = src; };

Intern::~Intern(void){}

Intern &	Intern::operator=(Intern const & rhs){
    if (this == &rhs)
        return *this;
    return *this;
}

Form *Intern::makeForm(std::string const &form_name, std::string const &target)
{
    t_intern table[3] = {
        {"shrubbery creation", new ShrubberyCreationForm(target)},
        {"robotomy request", new RobotomyRequestForm(target)},
        {"presidential robotomy", new PresidentialPardonForm(target)}
    };
    
    int index = -1;
    
    for (int i = 0; i < 3; i++)
    {
        if (form_name == table[i].formname)
        {
            index = i;
            continue;
        }
        else 
            delete table[i].form;
    }
    if (index == -1)
    {
        std::cout << form_name << " cannot creates " << std::endl;
        return NULL;
    }
    std::cout << "Intern creates " << form_name << std::endl;
    return table[index].form;
}