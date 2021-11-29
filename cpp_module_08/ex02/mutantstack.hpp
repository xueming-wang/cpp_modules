/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:44:38 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/29 23:45:17 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
/*自己做一个iterator 给stack*/
template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>  //继承stack
{
    public:
        MutantStack(void): std::stack<T, Container>();
        MutantStack(MutantStack const &src){ *this = src;}
        virtual ~MutantStack(void){};

        MutantStack &operator=(MutantStack const &rhs) {
            if (this == &rhs) return *this;
            std::stack<T, Container>::operator=(rhs);//?
            return *this;
        };

        typedef typename std::stack<T, Container>::container_type::iterator iterator;//?
        typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
        
        iterator begin(){return std::stack<T, Container>::c.begin()};
        iterator end(){return std::stack<T, Container>::c.end();};

        reverse_iterator rbegin() { return std::stack<T, Container>::c.rbegin();};
		reverse_iterator rend() { return std::stack<T, Container>::c.rend(); };
};

#endif