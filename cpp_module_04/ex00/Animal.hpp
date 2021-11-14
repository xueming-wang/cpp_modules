/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:26:24 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/14 16:35:30 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class  Animal
{
    protected:
        std::string type;
        
    public:
        Animal(void);
        Animal(Animal const & src);
        virtual ~Animal();
        virtual void makeSound()const;
        std::string getType()const;
        
        Animal  &operator = (Animal const &rhs);
        
};

class Dog : public Animal
{  
    public:
        Dog(void);
        Dog(Dog const & src);
        ~Dog();
        void makeSound()const;
        std::string getType()const;
        
        Dog  &operator = (Dog const &rhs);
};

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const & src);
        ~Cat();
        void makeSound()const;
        std::string getType()const;

        Cat  &operator = (Cat const &rhs);
};

#endif