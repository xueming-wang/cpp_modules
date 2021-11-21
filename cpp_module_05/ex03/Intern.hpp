/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:20:24 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/21 18:43:04 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
    
    public:
        Intern(void);
        Intern(Intern const &src);
        ~Intern(void);

        Intern &	operator=(Intern const & rhs);
        
        Form *makeForm(std::string const &form, std::string const &target); //&表示必须纯在
        
};

typedef struct s_intern {
    std::string formname;
    Form *form;
    
}t_intern;

#endif