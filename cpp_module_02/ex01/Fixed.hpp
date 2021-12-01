/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:06 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/30 18:40:08 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

    private:

        int _fixe; //valeur a point fixe
        const static int bits; 
       
    public:

        Fixed(void);
        Fixed(const int i);
        Fixed(const float f); 
        Fixed(Fixed const &src); // constructeur par copie 
        ~Fixed(void);
    
        Fixed   &operator = (Fixed const &rhs); 
    
        float   toFloat(void) const; 
        int     toInt(void) const; 
        int     getRawBits(void)const; 
        void    setRawBits(int const raw); 
        
};

std::ostream &operator << (std::ostream &o, Fixed const &a);

#endif