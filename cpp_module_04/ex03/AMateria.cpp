/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:42:36 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/02 18:05:43 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
/*AMateria*/
AMateria::AMateria(void) {}

AMateria::AMateria(std::string const & type):_type(type) {}

AMateria::AMateria(AMateria const &src){
    *this = src;
}    
AMateria::~AMateria(void) {};

AMateria &	AMateria::operator=(AMateria const & rhs){
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return *this;
}
std::string const & AMateria::getType() const{  //Returns the materia type
    return this->_type;
}
void AMateria::use(ICharacter& target){ 
    std::cout << target.getName() << std::endl; 
}

/*Ice*/
Ice::Ice(void): AMateria("ice") {}

Ice::Ice(Ice const &src) {
     *this = src;
}
Ice::~Ice(void) {}

Ice &	Ice::operator=(Ice const & rhs){
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return *this;
}
AMateria* Ice::clone() const { //clone ice
    return (new Ice());
}
void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << "*\"" << std::endl; 
}

/*Cure*/
Cure::Cure(void): AMateria("cure") {}

Cure::Cure(Cure const &src){
     *this = src;
}
Cure::~Cure(void) {}

Cure &	Cure::operator=(Cure const & rhs){
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return *this;
}
AMateria* Cure::clone() const {  //clone cure
    return (new Cure());
}
void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}