/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:17 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/03 19:13:35 by xuwang           ###   ########.fr       */
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
        
        Fixed   &operator--(void);
        Fixed   operator--(int);
        Fixed   &operator++(void);
        Fixed   operator++(int);
        
        bool operator>(Fixed const & rhs) const;  //comparer les classe
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;
        
        float   toFloat(void) const; //qui convertit un nombres à point fixe en float.
        int     toInt(void) const; //un nombres à point fixe en int.
        int     getRawBits(void)const;  //它返回定点数的原始值。
        void    setRawBits(int const raw); // qui set la valeur du nombre à point fixe.

        static Fixed const  &min(Fixed const &a, Fixed const &b); //全局变量
        static Fixed const  &max(Fixed const &a, Fixed const &b);
        // Fixed &min(Fixed & a, Fixed & b);
        // Fixed &max(Fixed & a, Fixed & b);
        
        
};

std::ostream &operator << (std::ostream &o, Fixed const &a);

#endif