/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:52 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/15 17:29:32 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# define IDEAS_NUM 100

class Brain
{
    private:
        std::string ideas[IDEAS_NUM];
        
    public:
        Brain(void);
        Brain(Brain const & src);
        ~Brain();
        
        Brain  &operator = (Brain const &rhs);

        std::string getIdea(int i)const;
        void setIdea(std::string idea, int i);
};

class  Animal
{
    protected:
        std::string type;
        
    public:
        Animal(void);
        Animal(Animal const & src);
        Animal(std::string const &_type);
        virtual ~Animal(void);
        virtual void makeSound()const = 0;  //Abstract classes
        std::string getType()const;
        
        Animal  &operator = (Animal const &rhs);
        
};

class Dog : public Animal
{  
    private:
        Brain *a;
        
    public:
        Dog(void);
        Dog(Dog const & src);
        virtual ~Dog(void);
        void makeSound()const;
        Brain *getBrain()const;
        
        Dog  &operator = (Dog const &rhs);
};

class Cat : public Animal
{
    private:
        Brain *b;

    public:
        Cat(void);
        Cat(Cat const & src);
        virtual ~Cat(void);
        void makeSound()const;
        Brain *getBrain()const;

        Cat  &operator = (Cat const &rhs);
};



#endif