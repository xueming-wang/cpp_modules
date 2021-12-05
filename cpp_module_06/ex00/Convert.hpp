/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:19:12 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/05 20:43:25 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <exception>
#include <cstdlib>
#include <stdint.h>
#include <climits>

class Convert
{
    private:
        std::string _str;
    public:
        Convert(void);
        Convert(Convert const &src);
        Convert(std::string str);
        ~Convert(void);
        
        Convert &operator=(Convert const & rhs);
        
        std::string const & getstr(void)const;
        operator char(void);//Automatic conversion
        operator int(void);
        operator float(void);
        operator double(void);
        void printlist(void);

        class MyimpossibleConvert: public std::exception {
            char const	*what() const throw();
        };
        class MydisplayConvert: public std::exception {
            char const	*what() const throw();
        };
    
};


#endif