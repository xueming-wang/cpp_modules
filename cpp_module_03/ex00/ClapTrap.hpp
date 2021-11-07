/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:07:18 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/07 17:16:31 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _Hitpoints;
        int _EnergyPoints;
        int _AttackDamage;
        
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string get_name(void)const;
        int get_AttackDamage(void);
        
        ClapTrap  &operator = (ClapTrap const &rhs);
};

// class B : public ClapTrap 
// {
//     private:
//         std::string _name;
//         int _Hitpoints;
//         int _EnergyPoints;
//         int _AttackDamage;
        
//     public:
//         B(std::string name);
//         ~B();
// }

#endif