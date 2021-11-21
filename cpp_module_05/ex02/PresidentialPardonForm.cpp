/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:26:50 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/21 15:29:00 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
    Form("PresidentialPardonForm", 25, 5),
   _target("Unknow") {}
    
PresidentialPardonForm::PresidentialPardonForm(std::string const & target):
    Form("PresidentialPardonForm", 25, 5),
   _target(target) {}
    
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):
    Form(src),
    _target(src._target){
    *this = src;
}

PresidentialPardonForm:: ~PresidentialPardonForm(void){}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
    if (this == &rhs)
        return *this;

    std::string *tmp_target = (std::string *)&this->_target;
    *tmp_target = rhs.gettarget();
    return *this;
}
 std::string PresidentialPardonForm::gettarget(void)const{
    return this->_target; 
 }

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (this->getsigne() == false)
        throw Form::NotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw Form::GradeTooLowException();
    std::cout << this->_target << " has been forgiven by Zafod Beeblebrox! " << std::endl;
}