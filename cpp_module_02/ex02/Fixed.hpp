/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:17 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/29 19:59:45 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

    private:

        int valeur;
        const static int bits = 8;
       
    public:

        Fixed(void);
        Fixed(const int i);
        Fixed(const float f); 
        Fixed(const Fixed &a); // constructeur par copie 
        ~Fixed(void);
    
    Fixed &operator = (const Fixed &b);
    float toFloat(void) const; //qui convertit un nombres à point fixe en float.
    int toInt(void) const; //un nombres à point fixe en int.
    int getRawBits(void)const;  //它返回定点数的原始值。
    void setRawBits(int const raw); // qui set la valeur du nombre à point fixe.
};

#endif