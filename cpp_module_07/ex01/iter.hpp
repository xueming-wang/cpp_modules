/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:31:14 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/28 13:39:43 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arry, size_t size, void(*f)(T const & a)) {
    for(int i = 0; i < size; i++) {
        (*f)(arry[i]);
    }
};

template <typename T>
void  f(T const & a){
    std::cout << a << std::endl;
};

#endif