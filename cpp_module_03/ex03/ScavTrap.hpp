/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:27:26 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/01 17:42:08 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        virtual ~ScavTrap(void);

        ScavTrap  &operator = (ScavTrap const &rhs);
        
        void attack(std::string const &target);
        void guardGate();

        void  get_HP(void);
        void  get_EP(void);
        void  get_AD(void);
};


#endif