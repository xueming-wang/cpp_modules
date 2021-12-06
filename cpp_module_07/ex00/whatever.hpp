/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:31:11 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/06 19:11:43 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
T const &max(T const &a, T const &b)
{
    if (a > b)
        return a;
    else
        return b;
}

template <typename T> 
T const &min(T const &a, T const &b)
{
    if (a < b)
        return a;
    else
        return b;
}

template < typename T > 
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

#endif