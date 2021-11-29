/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:23:48 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/29 22:33:10 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    //std::cout << "---test error Condition---"
    // Span sp = Span(5);
    // sp.addNumber(5);
    // try{
    //     std::cout << sp.shortestSpan() << std::endl;
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // try{
    //     std::cout << sp.longestSpan() << std::endl;
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    
}