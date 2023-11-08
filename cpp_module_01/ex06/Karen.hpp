/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:43:03 by xuwang            #+#    #+#             */
/*   Updated: 2023/11/08 19:20:13 by xuwang           ###   ########.fr       */
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
    
         void (Karen::*_complain[4])(void); 
    
    public:
        Karen(void);
        ~Karen(void);
        
        void complain(std::string level);
};

enum _level {
    DEBUG = 0,
    INFO = 1,
    WARNING = 2,
    ERROR = 3
};

#endif