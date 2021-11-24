/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:59:23 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/24 13:43:41 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void):_c(0),_i(0),_d(0) {}

Data::Data(char c, int i, double d):_c(c),_i(i),_d(d) {}

Data::Data(Data const & src) {*this = src;}

Data::~Data(void){}

Data &Data::operator=(Data const & rhs){
    if (this == &rhs)
				return *this;
		_c = rhs._c;
		_i = rhs._i;
		_d = rhs._d;
		return *this;
}

char const &Data::getChar(void)const {return this->_c;}
int const &Data::getInt(void)const {return this->_i;}
double const &Data::getDouble(void)const {return this->_d;}


uintptr_t serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw){
    return reinterpret_cast<Data *>(raw);
}

