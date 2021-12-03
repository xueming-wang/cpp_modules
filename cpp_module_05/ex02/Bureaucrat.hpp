/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:35:03 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/03 20:14:20 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <exception>

class Form;
class Bureaucrat
{
    private:
        std::string  const _name;
        int _grade;

    public:
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat(std::string const &name, int const grade);
        virtual ~Bureaucrat(void);
         
        class GradeTooHighException: public std::exception {
             const char * what () const throw ();
        };
        class GradeTooLowException: public std::exception {
             const char * what () const throw ();
        };
        
        std::string getName()const;
        int getGrade()const;
        void incGrade(void);
        void decGrade(void); //le grade 1 est le plus haut,
        void signForm(Form & a)const;
        
        Bureaucrat &operator=(Bureaucrat const & rhs);

        void	executeForm(Form const & form);
       
};
std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif