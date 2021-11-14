/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:27:55 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/08 19:42:58 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
/* 避免二次调用基类 Virtual inheritance */
class FragTrap : virtual public ClapTrap  //virtual public
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        virtual ~FragTrap();

        FragTrap  &operator = (FragTrap const &rhs);

        void highFivesGuys(void);

        void  get_HP(void);
        void  get_EP(void);
        void  get_AD(void);
};


#endif