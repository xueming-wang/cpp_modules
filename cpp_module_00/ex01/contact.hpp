/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:26:29 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/25 15:55:26 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#define INFO_NUM 5

class contact {
    
    public:
        contact(void);
        ~contact(void);
    
        std::string   get_first_name(void)const;
        std::string   get_last_name(void)const;
        std::string   get_nickname(void)const;
        std::string   get_phone_number(void)const;
        std::string   get_darkest_secret(void)const;
    
        void    set_first_name(const std::string &str);
        void    set_last_name(const std::string &str);
        void    set_nickname(const std::string &str);
        void    set_phone_number(const std::string &str);
        void    set_darkest_secret(const std::string &str);
        
        void clear_info(void);
        bool info_is_empty(void);
        
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        
};

#endif