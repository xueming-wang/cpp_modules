/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:06 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/03 12:44:27 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

    private:

        int _fixe; //Un int pour stocker la valeur a point fixe
        const static int bits; 
       
    public:

        Fixed(void);
        Fixed(const int i);
        Fixed(const float f); 
        Fixed(Fixed const &src); // constructeur par copie 
        ~Fixed(void);
    
        Fixed   &operator = (Fixed const &rhs); //operator overloading运算符重载
    
        float   toFloat(void) const; //qui convertit un nombres à point fixe en float.
        int     toInt(void) const; //un nombres à point fixe en int.
        int     getRawBits(void)const;  //它返回定点数的原始值。
        void    setRawBits(int const raw); // qui set la valeur du nombre à point fixe.
        
};

std::ostream &operator << (std::ostream &o, Fixed const &a);

#endif