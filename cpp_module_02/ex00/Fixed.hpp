/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:08:54 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/29 18:09:32 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

    private:

        int valeur;
        const static int bits = 8;
       
    public:

        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed &a); // constructeur par copie 
        //Le constructeur par copie se base sur un autre objet du même type pour construire l'objet en cours :
        Fixed &operator = (const Fixed &b);//非静态的成员函数

     // Un overload d’opérateur d’assignation.   
    int getRawBits(void)const;  //它返回定点数的原始值。
    void setRawBits(int const raw); // qui set la valeur du nombre à point fixe.
};

#endif