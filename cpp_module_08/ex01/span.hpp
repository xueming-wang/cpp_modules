/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:23:52 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/07 19:36:08 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>


class Span{

    public:
        Span(unsigned int N);
        Span(Span const &src);
        ~Span(void);    

        void addNumber(int nbr);
        int shortestSpan();
        int longestSpan();

        Span &operator=(Span const &rhs);
        class cannotAddNum:public std::exception {
                const char * what () const throw();
        };
        class cannotFindShort:public std::exception {
                const char * what () const throw();
        };
        class cannotFindLong:public std::exception {
                const char * what () const throw();
        };  
        std::vector<int> &getmyvector();
        // void inc_alreadyadd();

        void generate(unsigned int n);
        
    private:
        std::vector<int> myvector;
        unsigned int _n;
        unsigned int _alreadyadd;
        Span(void); //constructor as its only parameter

};
#endif
