/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:56:31 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/21 16:52:04 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
#include <cstdlib>

#define CONTACT_MAX 8
class phonebook {
                   
    public:
        phonebook();
        ~phonebook();

        void  exit(void);
        void  show_menu(void);
        void  add_contact(void);
        void  search_contact();
        
        
    private: 
        int    i;
        contact contacts[CONTACT_MAX];
        bool  print_book(void);
        void  print_search_contact(int index);
        void  get_value(std::string &str);
};


#endif