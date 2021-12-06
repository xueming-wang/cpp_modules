/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:59:25 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/06 12:42:59 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>
class Data {
    private:
        char _c;
        int _i;
        double _d;
        
    public:
        Data(void);
	    Data(char const c, int const i, double d);
		Data(Data const & src);
		virtual ~Data(void);

		Data &	operator=(Data const & rhs);

        char const &getChar(void)const;
        int const &getInt(void)const;
        double const &getDouble(void)const;
};
/*uintptr_t：unsigned integer type capable of holding a pointer
serialize :l'objet est converti dans un format qui peut être conservé ou transféré.*/
uintptr_t serialize(Data* ptr); 
Data* deserialize(uintptr_t raw);

#endif