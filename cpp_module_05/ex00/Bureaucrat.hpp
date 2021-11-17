/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:34:04 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/17 16:59:39 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#define NOTE_MIN 1
#define NOTE_MAX 150

class Bureaucrat
{
    private:
        std::string  _name;
        int _grade;

    public:
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat(std::string name, int note);
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

        Bureaucrat &operator=(Bureaucrat const & rhs);
       
};
std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif