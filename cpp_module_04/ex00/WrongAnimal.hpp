/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:29:54 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/14 16:44:07 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class  WrongAnimal
{
    protected:
        std::string type;
        
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const & src);
        virtual ~WrongAnimal();
        void makeSound()const;
        std::string getType()const;
        
        WrongAnimal  &operator = (WrongAnimal const &rhs);
        
};

class WrongDog : public WrongAnimal
{  
    public:
        WrongDog(void);
        WrongDog(WrongDog const & src);
        virtual ~WrongDog();
        void makeSound()const;
        std::string getType()const;
        
        WrongDog  &operator = (WrongDog const &rhs);
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat const & src);
        virtual ~WrongCat();
        void makeSound()const;
        std::string getType()const;

        WrongCat  &operator = (WrongCat const &rhs);
};

#endif