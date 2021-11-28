/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:31:23 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/28 17:59:50 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// int main(){

//     Array<int> a(3);
//     a[0] = 1;
//     a[1] = 2;
//     a[2] = 3;
//     std::cout << "a[0] is " << a[0] << std::endl;
//     try {
//        std::cout << a.operator[](4) << std::endl;
//     }
//     catch (const std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
//     try {
//         std::cout << "a[1] is: " << a.operator[](1) << std::endl;
//     }
//     catch (const std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
//     std::cout << "n of a is: " << a.n() << std::endl;
//     std::cout << std::endl;
    
//     Array<int> a2(3);
//     a2 = a;
//     std::cout << "n of a2 is: " << a2.n() << std::endl;
//     for(int i = 0; i < 3; i++) {
//         std::cout << a2.operator[](i) << " " ;
//     }
//     std::cout << std::endl << std::endl;
        
    
//     Array<char> b;
//     std::cout << "test b is empty" << std::endl;
//     try {
//         b[0] = 'c';
//         std::cout << b[0] << std::endl;
//     }
//     catch (const std::exception& e) {
//         std::cerr << e.what() << std::endl; 
//     }
//     std::cout << std::endl;
    
//     std::cout << "test c is float" << std::endl;
//     Array<float> c(1);
//     try {
//         c[0] = 42.42f;
//         std::cout << "c[0] is: " << c[0] << std::endl;
//     }
//     catch (const std::exception& e) {
//         std::cerr << e.what() << std::endl; 
//     }
    
//     return 0;
// }
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}