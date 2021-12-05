/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:34:58 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/05 14:27:02 by xuwang           ###   ########.fr       */
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
        int  const _signeGrade;
        int  const _execGrade;
        
    public:
        Form(void);
        Form(Form const &src);
        Form(std::string name, int signeGrade, int execGrade);
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
        class NotSignedException : public std::exception {
				virtual char const	*what() const throw();
        };

        virtual void	execute(Bureaucrat const &) const = 0;
};
std::ostream & operator<<(std::ostream & o, Form const & i);

#endif