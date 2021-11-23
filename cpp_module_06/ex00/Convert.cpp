/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:19:10 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/23 17:28:10 by xuwang           ###   ########.fr       */
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
    char c = static_cast<char>(this->_str);
    long l = 0;
    char *p = NULL;
    
    l = strtol(this->_str, p, 10);//strtol() 函数用来将字符串转换为长整型数(long)
    if (p != NULL) //表示不能转化为long 
        throw Convert::MydisplayConvert();
    if (l < 32 || c > 126) //1-31，127没有字符可以显示
        throw Convert::MyBadConvert();
    
   
    
   return static_cast<char>(this->_str);
}
void Convert::convertInt(void){
    return static_cast<int>(getstr());
}
void Convert::convertFloat(void){
    return static_cast<float>(getstr());
}
void Convert::convertDouble(void){
    double d;
    d = strtod(this->_this, )
   return static_cast<double>(getstr());
}

void Convert::printChar(void)
{
  if ()

}
  
char const *Convert::MyBadConvert::what() const throw() {
    return " impossible ";
}
char const *Convert::MydisplayConvert::what() const throw() {
    return " Non displayable ";
}


