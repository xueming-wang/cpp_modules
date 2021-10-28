/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:59:51 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/28 14:55:42 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {
    
    private:
    
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
         void (Karen::*_complain)(void); //function pointeur is not fonction 
    
    public:
        Karen(void);
        ~Karen(void);
        
        void complain(void);
};



#endif