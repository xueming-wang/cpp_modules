/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:02:18 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/15 17:40:07 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Polymorphism */
#include "Animal.hpp"
/*
Animal
*/
Animal::Animal() {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & src){
    std::cout << "Animal assignment constructor" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound()const {
    std::cout << "Animal makeSound" << std::endl;
}

std::string Animal::getType()const{
    return this->type;
}

Animal  &Animal::operator = (Animal const &rhs){
    if (this == &rhs)
        return *this;
    this->type = rhs.type;
    return *this;
}
/*
Dog
*/
Dog::Dog() {
    std::cout << "Dog constructor called" << std::endl;
    this->type = "dog";
}

Dog::Dog(Dog const & src) {
    std::cout << "Dog assignment constructor" << std::endl;
	*this = src;
	return ;
}
Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()const {
    std::cout << "Dog makeSound" << std::endl;
}

Dog  &Dog::operator = (Dog const &rhs){
    if (this == &rhs)
        return *this;
    this->type = rhs.type;
    return *this;
}
/*
Cat
*/
Cat::Cat() {
    std::cout << "Cat constructor called" << std::endl;
    this->type = "cat";
}

Cat:: Cat(Cat const & src) {
    std::cout << "Cat assignment constructor" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()const {
    std::cout << "Cat makeSound" << std::endl;
}

Cat  &Cat::operator = (Cat const &rhs){
    if (this == &rhs)
        return *this;
    this->type = rhs.type;
    return *this;
}