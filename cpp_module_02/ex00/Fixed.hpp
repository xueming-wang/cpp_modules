/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:08:54 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/31 18:29:39 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

    private:

        int _fixe;
        const static int bits = 8;
       
    public:

        Fixed(void);
        Fixed(Fixed const &src); // constructeur par copie 
        ~Fixed(void);
         
        Fixed &operator = (Fixed const &rhs);//非静态的成员函数
        int     getRawBits(void)const;  //它返回定点数的原始值。
        void    setRawBits(int const raw); // qui set la valeur du nombre à point fixe.
        
};

#endif