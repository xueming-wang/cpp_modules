/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:04:33 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/21 17:30:39 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact() {};

contact::~contact() {};

void contact::clear_info() {
    
    this->first_name.clear();
    this->last_name.clear();
    this->nickname.clear();
    this->phone_number.clear();
    this->darkest_secret.clear();
};
//set string 
void  contact::set_first_name(std::string &str) {
    this->first_name =str;
}
   

void  contact::set_last_name(std::string &str) {
    this->last_name=str;
   
};

void  contact::set_nickname(std::string &str) {
    this->nickname =str;
    
};

void  contact::set_phone_number(std::string &str) {
    this->phone_number =str;
    
};

void  contact::set_darkest_secret(std::string &str) {
    this->darkest_secret =str;
    
};
/* get one string ,this->执行的值不可修改can't change  == const contact *const this */
std::string   contact::get_first_name(void)const{
    return this->first_name;
};

std::string   contact::get_last_name(void)const{
    return this->last_name;
};

std::string   contact::get_nickname(void)const {
    return this->nickname;
};

std::string   contact::get_phone_number(void)const {
    return this->phone_number;
};

std::string   contact::get_darkest_secret(void)const {
    return this->darkest_secret;
};

bool    contact::info_is_empty(void){
    if (!this->first_name.empty())
        return (false);
    if (!this->last_name.empty())
        return (false);
    if (!this->nickname.empty())
        return (false);
    if (!this->phone_number.empty())
        return (false);
    if (!this->darkest_secret.empty())
        return (false);
    return (true);
};

