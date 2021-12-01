/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:48:38 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/01 18:28:45 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
        
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &src);
        virtual ~DiamondTrap();

        DiamondTrap &operator = (DiamondTrap const &rhs);

        void attack(std::string const & target);
        void whoAmI();
};


#endif