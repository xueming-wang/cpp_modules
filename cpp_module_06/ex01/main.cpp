/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:45:29 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/05 19:34:39 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    std::cout << "------data-------" << std::endl;
    Data data(42, -42, 42.42);
    std::cout << "char: " << data.getChar() << std::endl;
    std::cout << "int: " << data.getInt() << std::endl;
    std::cout << "double: " << data.getDouble() << std::endl;
    std::cout << std::endl;
    
    std::cout << "------serialize------" << std::endl;
    uintptr_t n = serialize(&data);
    std::cout << n << std::endl;
    std::cout << std::endl;
    
    std::cout << "------deserialize--------" << std::endl;
    Data *newdata;
    newdata = deserialize(n);
    std::cout << "char: " << newdata->getChar() << std::endl;
    std::cout << "int: " << newdata->getInt() << std::endl;
    std::cout << "double: " << newdata->getDouble() << std::endl;
    return 0;
}