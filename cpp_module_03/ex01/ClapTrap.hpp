/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:26:25 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/01 18:30:06 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:  /*use in derived class */
        std::string _name;
        int _Hitpoints;
        int _EnergyPoints;
        int _AttackDamage;
        
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        virtual ~ClapTrap(void);
        
        ClapTrap  &operator = (ClapTrap const &rhs);
        
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string get_name(void)const;
        int  get_Attackdamage(void);
        
};

#endif