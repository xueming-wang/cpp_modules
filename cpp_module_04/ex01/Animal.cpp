/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:09:58 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/03 16:29:44 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
/*
Brain
*/
Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
    
    const std::string brain[] = {"cry ", "small ", "angry "};
    for(int i = 0; i < IDEAS_NUM; i++){
        this->ideas[i] = brain[rand() % 3];
        std::cout << this->ideas[i];
    }
    std::cout << std::endl;
}

Brain::Brain(Brain const & src){
    std::cout << "Brain assignment constructor" << std::endl;
    for(int i = 0; i < IDEAS_NUM; i++){
        this->ideas[i] = src.ideas[i];
    }
    return;
}

Brain::~Brain(){
     std::cout << "Brain destructor called" << std::endl;
     return;
}

std::string Brain::getIdea(int i)const {
    return this->ideas[i];
}

void Brain::setIdea(std::string idea, int i) {
    this->ideas[i] = idea;
}

Brain  &Brain::operator = (Brain const &rhs){
    if (this == &rhs)
        return *this;
    for(int i = 0; i < IDEAS_NUM; i++)
        this->ideas[i] = rhs.ideas[i];
    return *this;
}

/*
Animal
*/   
Animal::Animal() {
    std::cout << "Animal constructor called" << std::endl;
    return;
}

Animal::Animal(std::string const &_type){
    this->type = _type;
    return;
}

Animal::Animal(Animal const & src){
    std::cout << "Animal assignment constructor" << std::endl;
	*this = src;
    return;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
    return;
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
Dog::Dog(): Animal("Dog"){
    std::cout << "Dog constructor called" << std::endl;
    this->_dog = new Brain();
    return;
    
}

Dog::Dog(Dog const & src): Animal(src) {
    std::cout << "Dog assignment constructor" << std::endl;
	this->_dog = new Brain(*(src._dog));
	return ;
}
Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete this->_dog;
    return ;
}

Brain *Dog::getBrain()const {
    return this->_dog;
}

Dog  &Dog::operator = (Dog const &rhs){
    if (this == &rhs)
        return *this;
    if (this->_dog)
        delete this->_dog;
    this->type = rhs.type;
    this->_dog = new Brain(*(rhs._dog));
    return *this;
}

void Dog::makeSound()const {
    std::cout << "Dog makeSound" << std::endl;
}
/*
CAT
*/
Cat::Cat(): Animal("Cat") {
    std::cout << "Cat constructor called" << std::endl;
    this->_cat = new Brain();
    return ;
}

Cat:: Cat(Cat const & src): Animal(src) { 
    std::cout << "Cat assignment constructor" << std::endl;
    this->_cat = new Brain(*(src._cat));
	return ;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete this->_cat;
    return ;
}

void Cat::makeSound()const {
    std::cout << "Cat makeSound" << std::endl;
}

Brain *Cat::getBrain()const {
    return this->_cat;
}

Cat  &Cat::operator = (Cat const &rhs){
    if (this == &rhs)
        return *this;
    if (this->_cat)
        delete this->_cat;
    this->type = rhs.type;
    this->_cat = new Brain(*(rhs._cat));
    return *this;
}
