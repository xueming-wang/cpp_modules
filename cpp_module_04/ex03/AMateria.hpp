/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:42:38 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/02 18:04:03 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(AMateria const &src);
        virtual ~AMateria(void);
        
        AMateria &	operator=(AMateria const & rhs);
        
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;  /* pure virtual function and  Polymorphis虚函数和多态*/
        virtual void use(ICharacter& target);
};

class Ice :public AMateria
{
    public:
        Ice(void);
        Ice(Ice const &src);
        ~Ice(void);
        
        Ice &	operator=(Ice const & rhs);
        
        AMateria* clone() const;
        void use(ICharacter& target);
};

class Cure :public AMateria
{
    public:
        Cure(void);
        Cure(Cure const &src);
        ~Cure(void);
        
        Cure &	operator=(Cure const & rhs);
        
        AMateria* clone() const;
        void use(ICharacter& target);
};


#endif