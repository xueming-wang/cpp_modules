/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:08:54 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/30 17:11:18 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

    private:

        int _fixe;  //la valeur a point fixe
        const static int bits; //le nombre de bits fractionnels
       
    public:

        Fixed(void);
        Fixed(Fixed const &src); // constructeur par copie 
        ~Fixed(void);
         
        Fixed &operator = (Fixed const &rhs);//非静态的成员函数
        int     getRawBits(void)const;  //它返回定点数的原始值。
        void    setRawBits(int const raw); // qui set la valeur du nombre à point fixe.
        
};

#endif