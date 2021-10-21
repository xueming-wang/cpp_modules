/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:26:34 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/21 16:14:44 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook() {
    return;
};

phonebook::~phonebook() {
    for(int i = 0; i < CONTACT_MAX; i++)
        this->contacts[i].clear_info();
    return;
};

void   phonebook::exit(void) {
    std::exit(EXIT_SUCCESS);
};


void phonebook::show_menu(void) {
    
    std::cout << "* choose cmd *" << std::endl;
    std::cout << "*** [ADD], [SEARCH], [EXIT]***" << std::endl << std::endl;
}

std::string  handling_str(std::string str) {
    if (str.size() >= 10)
    {
        str = str.substr(0,9);
        str = str + '.';
    }
    return (str);
}
bool   phonebook::print_book(void) {

    if (this->i == 0){
        std::cout << "Book is empty !\n" << std::endl;
        return (false);
    }
    else
    {
        std::cout << "|----------|----------|----------|----------|" << std::endl;
	    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	    std::cout << "|----------|----------|----------|----------|" << std::endl;
        
        for(int j = 0; j < CONTACT_MAX; j++) {
            if (this->contacts[j].info_is_empty() == false) {
                std::cout << '|' << std::setw(10) << j + 1 << '|' << std::setw(10) << handling_str(this->contacts[j].get_first_name());
                std::cout << '|' << std::setw(10) << handling_str(this->contacts[j].get_last_name());
                std::cout << '|' << std::setw(10) << handling_str(this->contacts[j].get_nickname()) << '|' << std::endl;
            }
        }
        std::cout << "|----------|----------|----------|----------|" << std::endl << std::endl;
    }
    return (true);
}
void    phonebook::print_search_contact(int index)
{
    std::cout << "first name: " << this->contacts[index - 1].get_first_name() << std::endl;
    std::cout << "last name: " << this->contacts[index - 1].get_last_name() << std::endl;
    std::cout << "nick name: " << this->contacts[index - 1].get_nickname() << std::endl;
    std::cout << "phone_number: " << this->contacts[index - 1].get_phone_number() << std::endl;
    std::cout << "darkest_secret: " << this->contacts[index - 1].get_darkest_secret() << std::endl;
    std::cout << std::endl << std::endl;
}  

void   phonebook::add_contact(void)
{
    std::string tmp;
    if (this->i == CONTACT_MAX)
        std::cout << "contact is full" << std::endl;
    else
    {    
        tmp.clear();
        std::cout << " ->Entre your first name: " << std::endl;
        std::getline(std::cin, tmp); 
        this->contacts[this->i].set_first_name(tmp);

        tmp.clear();
        std::cout << " ->Entre your last name: " << std::endl;
        std::getline(std::cin, tmp); 
        this->contacts[this->i].set_last_name(tmp);
        
        tmp.clear();
        std::cout << " ->Entre your nick name: " << std::endl;
        std::getline(std::cin, tmp);
        this->contacts[this->i].set_nickname(tmp);
        
        tmp.clear();
        std::cout << " ->Entre your phone_number: " << std::endl;
        std::getline(std::cin, tmp); 
        this->contacts[this->i].set_phone_number(tmp);
        
        tmp.clear();
        std::cout << " ->Entre your darkest_secret: " << std::endl;
        std::getline(std::cin, tmp); 
        this->contacts[this->i].set_darkest_secret(tmp);

        std::cout << std::endl;
        if (this->contacts[this->i].info_is_empty() == false) 
              ++this->i;
    }
}

bool isNum(std::string str)
{
    for(int i = 0; i < str.size(); i++)
    {
        int tmp = (int)str[i];
        if (tmp >= 48 && tmp <= 57)
            continue;
        else
            return false;
    }
    return true;
}
void     phonebook::search_contact(void) {
        
        int index = -1;
        std::string tmp;
        bool ret = true;
        
        ret = print_book();
        if (ret == true) {
            while (true) {
        
                index = -1;
                tmp.clear();
                std::cout << "Entre number: "<< std::endl;
                std::getline(std::cin, tmp);
                if (isNum(tmp) == true)
                    index = atoi(tmp.c_str());
                if (index < 1 || index > CONTACT_MAX){
                    std::cout << "Wrong index !" << std::endl;
                }
                else {
                    if (this->contacts[index - 1].info_is_empty() == true) {
                        std::cout << index << " is_empty !" << std::endl << std::endl;
                        break;
                    }
                    else {
                        print_search_contact(index);
                        break;
                    }
                }
            }
        }
}



int main(void) {
    
    phonebook book;
    std::string cmd;
    
    while (true) {
        
        book.show_menu();
        std::getline(std::cin, cmd);
        if (cmd == "EXIT")
            book.exit();
        else if (cmd == "SEARCH") {
            book.search_contact();
            continue;
        }
        else if (cmd == "ADD") {
            book.add_contact();
            continue;
        }
        else {
            std::cout << "* cmd not found * " << std::endl;
            continue;
        }
    }
    
    return (0);
}