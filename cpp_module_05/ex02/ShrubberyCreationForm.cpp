/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:26:58 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/05 14:30:09 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):
    Form("ShrubberyCreationForm", 145, 137),
   _target("Unknow") {}
    
ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target):
    Form("ShrubberyCreationForm", 145, 137),
   _target(target) {}
    
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):
    Form(src),
    _target(src._target){
    *this = src;
}

ShrubberyCreationForm:: ~ShrubberyCreationForm(void){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
    if (this == &rhs)
        return *this;

    std::string *tmp_target = (std::string *)&this->_target;
    *tmp_target = rhs.gettarget();
    return *this;
}
 std::string ShrubberyCreationForm::gettarget(void)const{
    return this->_target; 
 }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (this->getsigne() == false)
        throw Form::NotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw Form::GradeTooLowException();
    std::ifstream infile("Asciitree");
    if (!infile)
    {
        std::cout << "open [" << "Asciitree" << "] failed !" << std::endl;
        return;
    }
    std::ofstream outfile(this->_target + "_shrubbery");
    if (!outfile)
    {
        std::cerr << "creat new file failed !" << std::endl;
        return;
    }
    std::string contents;
    while (true) { 
        std::getline(infile, contents);
        outfile << contents;
        if (infile.eof() == true)
            break;
        else
            outfile << std::endl;
    }
        
    infile.close();
    outfile.close();
}
