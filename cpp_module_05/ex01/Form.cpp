/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:34:56 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/05 14:15:58 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void):
    _name("Unknow"),
    _signe(false),
    _signeGrade(150),
    _execGrade(150) {}

Form::Form(Form const &src):
    _name(src.getName()),
    _signeGrade(src.getSigneGrade()),
    _execGrade(src.getExecGrade()){
        *this = src;
}
    
Form::Form(std::string const &name, int const signeGrade, int const execGrade):
    _name(name),
    _signe(false),
    _signeGrade(signeGrade),
    _execGrade(execGrade) {
    if (signeGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
    if (signeGrade < 1 || execGrade < 1)
        throw GradeTooHighException();   
}

Form::~Form(void){}

Form &Form::operator=(Form const & rhs){
     if (this == &rhs)
        return *this;
    std::string *tmp = (std::string *)&this->_name;
    int *stmp = (int *)&this->_signeGrade;
    int *etmp = (int *)&this->_execGrade;
    this->_signe = rhs._signe;
    *tmp = rhs.getName();
    *stmp = rhs.getSigneGrade();
    *etmp = rhs.getExecGrade();
    return *this;
}

std::string const &Form::getName()const{
    return (this->_name);
}

int Form::getSigneGrade()const{
    return (this->_signeGrade);
}

int Form::getExecGrade()const{
    return (this->_execGrade);
}

bool Form::getsigne(void)const{
    return (this->_signe);
}

void Form::beSigned(Bureaucrat const &a){
    if (a.getGrade() <= this->_signeGrade)
        this->_signe = true;
    else
        throw GradeTooLowException();
}
        
const char *Form::GradeTooHighException::what() const throw() {
    return "Grate is too higt Exception!" ;
}
const char *Form::GradeTooLowException::what() const throw() {
    return "Grate is too low Exception!" ;
}

std::ostream & operator<<(std::ostream & o, Form const & i){
     o << i.getName() << " signe is: " << (i.getsigne()? "signed":"unsigned")  << " ,signeGrade is: " << i.getSigneGrade();
     o << " ,ExecGrade is: " << i.getExecGrade() <<  std::endl;
    return o;
}