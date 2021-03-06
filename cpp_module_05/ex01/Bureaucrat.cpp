/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:35:05 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/05 13:39:57 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void):_name("Unknow"), _grade(1) {}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    *this = src;
}
Bureaucrat::Bureaucrat(std::string const &name, int const grade):_name(name){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}
Bureaucrat::~Bureaucrat(void) {}

std::string  Bureaucrat::getName()const{
    return this->_name;
}
int Bureaucrat::getGrade()const {
    return this->_grade;
}
void  Bureaucrat::incGrade(void){
     if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= 1;
}
void  Bureaucrat::decGrade(void){
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade += 1;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const & rhs){
    if (this == &rhs)
        return *this;
   this->_grade = rhs._grade;
    std::string *tmp_name = (std::string *)&this->_name;
	*tmp_name = rhs.getName();
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grate is too higt Exception!" ;
}
const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grate is too low Exception!" ;
}
std::ostream & operator<<(std::ostream & o, Bureaucrat const & i){
    o << i.getName() << " grade is: " << i.getGrade();
    return o;
}

void Bureaucrat::signForm(Form & a)const{
    try {
        a.beSigned(*this);
            std::cout << this->_name << " signe " << a.getName() << std::endl;
    }
    catch(std::exception &e) {
         std::cout << this->_name << " cannot sign because " << e.what() << std::endl;
    }
}
