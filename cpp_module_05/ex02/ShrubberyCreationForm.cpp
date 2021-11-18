/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:26:58 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/18 18:37:22 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):
    Form("ShrubberyCreationForm", 145, 137),
   _name("Unknow") {}
    
ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target):
    Form("ShrubberyCreationForm", 145, 137),
   _name(target) {}
    
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):
    Form(src),
    _name(src.getName()){
    *this = src;
}

ShrubberyCreationForm:: ~ShrubberyCreationForm(void){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
    if (this == &rhs)
        return *this;
    this->_name = rhs._name;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{}
