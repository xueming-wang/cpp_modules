/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:23:48 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/07 19:41:42 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void dispayint(int i) {
    std::cout << i << std::endl;
}

int main()
{
    {
        std::cout << "---test normal---" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        std::cout << "---test add more number---" << std::endl;
        Span sp = Span(5);
        sp.addNumber(-1);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        try{
            sp.addNumber(11);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "shortestSpan: " << std::endl;
        try{
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "longestSpan: " << std::endl;
        try{
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "---test error span---" << std::endl;
        Span sp = Span(5);
        sp.addNumber(-1);//add one nbr
        try{
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        
        try{
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "---test 10000 number---" << std::endl;
        Span sp = Span(10000);
        sp.generate(10000);

        //std::for_each(sp.getmyvector().begin(), sp.getmyvector().end(), dispayint);
        try{
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        
        try{
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
                  
    }
    return 0;
    
}