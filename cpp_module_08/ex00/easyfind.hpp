/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:52:53 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/07 17:50:15 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <exception>
#include <iterator>

template <typename T>
int easyfind (T container, int find) {
    typename T::iterator it = std::find(container.begin(), container.end(), find);
    if (it != container.end()) //容器类名::iterator  迭代器名;
        return *it;
    else
        throw std::exception();                
}

template <typename T>
void tryFind(T container, int find)
{
    try{
        std::cout << easyfind(container, find) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "cannot find number!" << std::endl;
    }
}

#endif