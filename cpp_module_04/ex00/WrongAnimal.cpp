/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:29:58 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/14 18:14:32 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
/*
Animal
*/
WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src){
    std::cout << "WrongAnimal assignment constructor" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound()const {
    std::cout << "WrongAnimal makeSound" << std::endl;
}

std::string WrongAnimal::getType()const{
    return this->type;
}

WrongAnimal  &WrongAnimal::operator = (WrongAnimal const &rhs){
    if (this == &rhs)
        return *this;
    this->type = rhs.type;
    return *this;
}
/*
Dog
*/
WrongDog::WrongDog() {
    this->type = "Wrongdog";
    std::cout << "WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(WrongDog const & src) {
    std::cout << "WrongDog assignment constructor" << std::endl;
	*this = src;
	return ;
}

WrongDog::~WrongDog() {
    std::cout << "WrongDog destructor called" << std::endl;
}

void WrongDog::makeSound()const {
    std::cout << "WrongDog makeSound" << std::endl;
}

WrongDog  &WrongDog::operator = (WrongDog const &rhs){
    if (this == &rhs)
        return *this;
    this->type = rhs.type;
    return *this;
} 
/*
Cat
*/
WrongCat::WrongCat() {
    this->type = "Wrongcat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat:: WrongCat(WrongCat const & src) {
    std::cout << "WrongCat assignment constructor" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound()const {
    std::cout << "WrongCat makeSound" << std::endl;
}

WrongCat  &WrongCat::operator = (WrongCat const &rhs){
    if (this == &rhs)
        return *this;
    this->type = rhs.type;
    return *this;
}