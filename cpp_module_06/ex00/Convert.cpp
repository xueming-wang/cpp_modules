/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:19:10 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/23 16:32:40 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) {}
Convert::Convert(Convert const &src){ *this = src;}
Convert::~Convert(void){}
Convert &Convert::operator=(Convert const & rhs){
    if (this == &rhs) return *this;

	this->_str = rhs._str;
	return *this;
}
std::string Convert::getstr(void){
    return this->_str;
}
void Convert::convertChar(void){
    return static_cast<char>(getstr());
}
void Convert::convertInt(void){
    return static_cast<int>(getstr());
}
void Convert::convertFloat(void){
    return static_cast<float>(getstr());
}
void Convert::convertDouble(void){
   return static_cast<double>(getstr());
}

void Convert::printChar(void)
{
    try {
        std::cout << "char: " << convertChar() << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}
  
char const *Convert::MyBadConvert::what() const throw() {
    return " impossible ";
}
char const *Convert::MydisplayConvert::what() const throw() {
    return " Non displayable ";
}


