/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:13:46 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/06 13:04:12 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {

    srand(time(NULL));
    Base *base = generate(); //creer A or B or C;
    
    identify_ptr(base); //check print A or B or C;
    identify_ref(*base); //check A or B or C;

    delete base;
    return 0;
}