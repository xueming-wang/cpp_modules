/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:44:38 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/08 13:33:46 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>


template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>  //heritage of stack
{
    public:
        MutantStack(void): std::stack<T, Container>() {};
        MutantStack(MutantStack const &src) { *this = src;}
        virtual ~MutantStack(void){};

        // type ret | func name |  parameter
        MutantStack &operator=(MutantStack const &rhs) { 
            if(this == &rhs)
                return *this;
            std::stack<T, Container>::operator=(rhs);
            return *this;
        };
        /* use iterator from deque to define mutantstack iterator */
        typedef typename std::stack<T, Container>::container_type::iterator iterator;
        /* same but for reverse_iterator */
        typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
        
        
        iterator begin(void) { return std::stack<T, Container>::c.begin(); }; // c is a attribute from stack
        iterator end(void) {return std::stack<T, Container>::c.end();};

        reverse_iterator rbegin() { return std::stack<T, Container>::c.rbegin();};
		reverse_iterator rend() { return std::stack<T, Container>::c.rend(); };
};

#endif