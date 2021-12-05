/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:34:58 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/05 14:14:52 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
    private:
        std::string const _name;
        bool  _signe;
        int  const _signeGrade;//签字等级
        int  const _execGrade;//执行等级
        
    public:
        Form(void);
        Form(Form const &src);
        Form(std::string const &name, int const signeGrade, int const execGrade);
        virtual ~Form(void);
        
        Form &operator=(Form const & rhs);
        
        std::string const &getName()const;
        int getSigneGrade()const;
        int getExecGrade()const;
        bool getsigne(void)const;
        
        void beSigned(Bureaucrat const &);
        
        class GradeTooHighException: public std::exception {
             const char * what () const throw ();
        };
        class GradeTooLowException: public std::exception {
             const char * what () const throw ();
        };
};
std::ostream & operator<<(std::ostream & o, Form const & i);

#endif