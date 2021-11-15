/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:50 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/15 17:29:14 by xuwang           ###   ########.fr       */
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
        this->ideas[i] = brain[rand() % (sizeof(brain) / sizeof(std::string))];
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
    this->a = new Brain();
    return;
    
}

Dog::Dog(Dog const & src): Animal(src) {
    std::cout << "Dog assignment constructor" << std::endl;
	this->a = new Brain(*(src.a));
	return ;
}
Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete this->a;
    return ;
}

Brain *Dog::getBrain()const {
    return this->a;
}

Dog  &Dog::operator = (Dog const &rhs){
    if (this == &rhs)
        return *this;
    if (this->a)
        delete this->a;
    this->type = rhs.type;
    this->a = new Brain(*(rhs.a));//!!!!!
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
    this->b = new Brain();
    return ;
}

Cat:: Cat(Cat const & src): Animal(src) {  //deep copy
    std::cout << "Cat assignment constructor" << std::endl;
    this->b = new Brain(*(src.b));
	return ;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete this->b;
    return ;
}

void Cat::makeSound()const {
    std::cout << "Cat makeSound" << std::endl;
}

Brain *Cat::getBrain()const {
    return this->b;
}

Cat  &Cat::operator = (Cat const &rhs){
    if (this == &rhs)
        return *this;
    if (this->b)
        delete this->b;
    this->type = rhs.type;
    this->b = new Brain(*(rhs.b));//!!!!!
    return *this;
}
