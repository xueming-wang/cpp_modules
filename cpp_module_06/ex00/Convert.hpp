/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:19:12 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/23 16:28:26 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert
{
    private:
        std::string _str;
    public:
        Convert(void);
        Convert(Convert const &src);
        ~Convert(void);
        
        Convert &operator=(Convert const & rhs);
        
        std::string getstr(void);
        void convertChar(void)
        void convertInt(void)
        void convertFloat(void)
        void convertDouble(void)

        class MyBadConvert: pubic std::exception {
            char const	*what() const throw();
        }
        class MydisplayConvert: pubic std::exception {
            char const	*what() const throw();
        }
    
}


#endif