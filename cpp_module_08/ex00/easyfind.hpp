/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:52:53 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/28 20:19:51 by xuwang           ###   ########.fr       */
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
int easyfind (T content, int find) {
    typename T::iterator it = std::find(content.begin(), content.end(), find);
    if (it != content.end()) //容器类名::iterator  迭代器名;
        return *it;
    else
        throw std::exception();
}

template <typename T>
void tryFind(T content, int find)
{
    try{
        std::cout << easyfind(content, find) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "cannot find number!" << std::endl;
    }
}

#endif