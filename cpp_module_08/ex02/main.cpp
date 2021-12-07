/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:34:38 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/07 20:59:09 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
    {
         std::cout << "--------MutantStack test--------" << std::endl;
        MutantStack<int> mstack;
        
        mstack.push(5);
        mstack.push(17);
        
        std::cout << mstack.top() << std::endl;// to the top element in the stack 
        mstack.pop();//Removes the element on top of the stack -17
        
        std::cout << mstack.size() << std::endl << std::endl;
        mstack.push(3);
        mstack.push(5); 
        mstack.push(737);
        // [...]
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin(); 
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
        std::cout << "top is :" << s.top() << std::endl;
    }
    {

        std::cout << "--------comparer List test--------" << std::endl;
	    std::list<int> lst;
	
        lst.push_back(5);
        lst.push_back(17);
        
        std::cout << "Top: " << lst.back() << std::endl;

        lst.pop_back();

        std::cout << "Size: " << lst.size() << std::endl<< std::endl;
        
        lst.push_back(3);
        lst.push_back(5);
        lst.push_back(737);
        lst.push_back(0);
        
        std::list<int>::iterator it = lst.begin();
        std::list<int>::iterator ite = lst.end();
        ++it;
        --it;
        std::cout << "list:" << std::endl;
        while (it != ite) {
             std::cout << *it << std::endl;
            ++it;
	    }
        
       
    }
    return 0;
}