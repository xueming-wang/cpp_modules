/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:26:54 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/05 14:24:30 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):
    Form("RobotomyRequestForm", 72, 45),
   _target("Unknow") {}
    
RobotomyRequestForm::RobotomyRequestForm(std::string const & target):
    Form("RobotomyRequestForm", 72, 45),
   _target(target) {}
    
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):
    Form(src),
    _target(src._target){
    *this = src;
}

RobotomyRequestForm:: ~RobotomyRequestForm(void){}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
    if (this == &rhs)
        return *this;

    std::string *tmp_target = (std::string *)&this->_target;
    *tmp_target = rhs.gettarget();
    return *this;
}
 std::string RobotomyRequestForm::gettarget(void)const{
    return this->_target; 
 }

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (this->getsigne() == false)
        throw Form::NotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw Form::GradeTooLowException();
    std::cout << "* Bzzzzzzz Drrrrrrrr Bzzzzzz ..." << std::endl;
    srand((unsigned int)(time(NULL)));
    std::cout << rand() << std::endl;
    if (rand() % 2 == true) 
        std::cout << this->_target << " has been robotomized! " << std::endl;
    else   
        std::cout << this->_target << " Failed! " << std::endl;
}