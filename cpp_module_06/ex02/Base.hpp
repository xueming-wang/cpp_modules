/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:14:07 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/24 16:15:23 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
//dynamic_cast在将父类cast到子类时，父类必须要有虚函数
class Base
{
    public:
        virtual ~Base(void);
};
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void);
void identify_ptr(Base * p);
void identify_ref( Base & p);

#endif