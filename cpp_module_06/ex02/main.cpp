/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:13:46 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/24 16:21:10 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    Base *base = generate();
    Base &base2 = *base;
    
    std::cout << "identift by pointer" << std::endl;
    identify_ptr(base);
    std::cout << "identift by reference" << std::endl;
    identify_ref(base2);

    delete base;
    return 0;
}