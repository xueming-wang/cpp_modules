/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:50:43 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/07 17:56:03 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

void dispayint(int i) 
{
    std::cout << i << std::endl;
}
int main()  
{  
    std::cout << "-----------test with vector---------" << std::endl;
    std::vector<int> myvector;//tableau
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
    
    std::cout << "-----------test with list---------" << std::endl;
    std::list<int> lst; //list chaine
    lst.push_back(1);
    lst.push_back(21);
    lst.push_back(42);
    std::for_each(lst.begin(), lst.end(), dispayint);
    
    std::cout << "find: ";
    tryFind(lst, 42);
    
    tryFind(lst, 100);
    return 0;
}  