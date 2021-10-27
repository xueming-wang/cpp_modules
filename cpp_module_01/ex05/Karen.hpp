/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:59:51 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/27 19:29:35 by xuwang           ###   ########.fr       */
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
    
        void (Karen::*complain[4])(void); //function pointeur 
    
    public:
        Karen(void);
        ~Karen(void);
        
    void complain(std::string level);
};



#endif