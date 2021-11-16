/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:13:54 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/16 15:21:08 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#define INVENTORY 4

class Character: public ICharacter
{
    private:
        std::string	_name;
        AMateria *_amatria[INVENTORY];
        
    public:
        Character(void);
        Character(std::string const &name);
        Character(Character const &src);
        ~Character();
        
        Character &	operator=(Character const & rhs);
        
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif