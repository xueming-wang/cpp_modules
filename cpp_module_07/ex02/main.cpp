/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:31:23 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/06 19:35:11 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

int main()
{
    {    
        std::cout << "----------test template int ---------" << std::endl;    
        Array<int> a(3);
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;
        std::cout << "a[0] is " << a[0] << std::endl;
        std::cout << "a[1] is " << a[1] << std::endl;
        std::cout << "a[2] is " << a[2] << std::endl << std::endl;
        
        try {
            std::cout << a.operator[](3) << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << "operator[](3) " << e.what() << std::endl;
        }
        try {
            std::cout << "a[2] is: " << a.operator[](2) << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "size of a is: " << a.size() << std::endl << std::endl;
        
        std::cout << "--------test deep copy and assignment operator------" << std::endl;
        Array<int> a2(3);
        a2 = a;
        std::cout << "size of a2 is: " << a2.size() << std::endl;
        for(int i = 0; i < 3; i++) {
            std::cout << a2.operator[](i) << " " ;
        }
        std::cout << std::endl;
        a2[0] = 8;
        std::cout << "a2[0] is " << a2[0] << std::endl;
        std::cout << "a[0] is " << a[0] << std::endl << std::endl;
        std::cout << std::endl;
            
        std::cout << "----------test template char ---------" << std::endl;    
        Array<char> b; //size is 0;
        try {
            b[0] = 'c';
            std::cout << b[0] << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl; 
        }
        std::cout << std::endl;
        
        std::cout << "----------test template float ---------" << std::endl;    
        Array<float> c(1);
        try {
            c[0] = 42.42f;
            std::cout << "c[0] is: " << c[0] << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl; 
        }
    }
        std::cout << std::endl;
    {
        std::cout << "--------test limite(in sujet)-------- " << std::endl;
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
        delete [] mirror;
        return 0;
    }
}
