/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:34:38 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/08 13:04:47 by xuwang           ###   ########.fr       */
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
        
        std::cout << "--------par copy test--------" << std::endl;
        MutantStack<int> s = mstack ;
        std::cout << "top is :" << s.top() << std::endl << std::endl;
        s.push(-1);
        s.push(21);
        s.push(42);
        MutantStack<int>::iterator its= s.begin(); 
        MutantStack<int>::iterator ites = s.end();
        while (its != ites) {
            std::cout << *its<< std::endl;
            ++its;
        }

        std::cout << std::endl;
        MutantStack<int>::reverse_iterator itr= s.rbegin(); 
        MutantStack<int>::reverse_iterator iter = s.rend();
        while (itr != iter) {
            std::cout << *itr<< std::endl;
            ++itr;
        }
    }
    return 0;
}