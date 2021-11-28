/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:50:43 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/28 20:18:38 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

void dispayint(int i) 
{
    std::cout << i << std::endl;
}
int main()  
{  //Sequence Container
    std::vector<int> myvector;
    for(int i=0;i<10;i++)
    {
        myvector.push_back(i);
        std::cout<<myvector[i]<<" ";
    }
    std::cout << std::endl;
    std::cout << "find: ";
    tryFind(myvector, 1);
    std::cout << "find: ";
    tryFind(myvector, 2);
    tryFind(myvector, 100);
    
    //list chaine 插入或删除元素 确的做法是从容器中第一个元素或最后一个元素开始遍历容器，直到找到该位置。
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(21);
    lst.push_back(42);
    std::for_each(lst.begin(), lst.end(), dispayint);
    
    std::cout << "find: ";
    tryFind(lst, 42);
    tryFind(lst, 100);
    lst.clear();
    return 0;
}  