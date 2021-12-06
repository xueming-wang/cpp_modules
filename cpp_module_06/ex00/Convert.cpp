/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:19:10 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/06 12:29:24 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) {}
Convert::Convert(std::string str): _str(str){}
Convert::Convert(Convert const &src){ *this = src;}
Convert::~Convert(void){}

Convert &Convert::operator=(Convert const & rhs){
    if (this == &rhs) return *this;
	this->_str = rhs._str;
	return *this;
}

Convert::operator char(void){
    std::string str = this->_str;
    long l = 0;
    char *p = NULL;
    /*strlol: char* -> long ,c_str() -> const char* */
    l = strtol(str.c_str(), &p, 10); 
    if (str.c_str() == p) 
        throw Convert::MyimpossibleConvert();
    if (l < 32 || l > 126)
        throw Convert::MydisplayConvert();
    return static_cast<char>(l);
}

Convert::operator int(void){
    std::string str = this->_str;
    long l = 0;
    char *p = NULL;

    l = strtol(str.c_str(), &p, 10);
    if (str.c_str() == p || l > INT32_MAX || l < INT32_MIN)
         throw Convert::MyimpossibleConvert();
    return static_cast<int>(l);
}

Convert::operator float(void){
    std::string str = this->_str;
    float f = 0.0f;
    char *p = NULL;
    f = strtof(str.c_str(), &p);
    if (str.c_str() == p)
        throw Convert::MyimpossibleConvert();
    return static_cast<float>(f);
}

Convert::operator double(void){
    std::string str = this->_str;
    double d = 0.0;
    char *p = NULL;
    d = strtod(str.c_str(), &p);
    if (str.c_str() == p)
        throw Convert::MyimpossibleConvert();
    return static_cast<double>(d);
}

void Convert::printlist(void)
{
    std::cout << "char: ";
    try {
        //char c = (*this);
        char c = static_cast<char>(*this);
        std::cout << "\'" << c << "\'" << std::endl; 
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "int: "; 
    try {
        int i =  static_cast<int>(*this);
        std::cout << i << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "float: "; 
    try {
         float f =  static_cast<float>(*this);
         std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(1);
         std::cout << f << "f" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "double: "; 
    try {
        double d = static_cast<double>(*this);
        std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(1);
        std::cout << d << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}

char const *Convert::MyimpossibleConvert::what() const throw() {
    return "impossible ";
}
char const *Convert::MydisplayConvert::what() const throw() {
    return "Non displayable ";
}


