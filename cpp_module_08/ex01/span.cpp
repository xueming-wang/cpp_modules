/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:23:50 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/29 22:38:55 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) {}

Span::Span(unsigned int n):_n(n), _add(0), myvector(0){}

Span::~Span(void){}

Span::Span(Span const &src) {*this = src;};

void Span::addNumber(int nbr){
    if (this->_add == this->_n)
        throw Span::cannotAddNum();
    this->myvector.push_back(nbr);
        ++this->_add;
}

Span &Span::operator=(Span const &rhs) {
    if (this == &rhs)
        return *this;
    this->myvector = rhs.myvector;
    this->_add = rhs._add;
    this->_n = rhs._n;
    return *this;
}

int Span::shortestSpan(){
    if (this->_add <= 1)
        throw Span::cannotFindShort();
    std::vector<int>tmp = this->myvector; // using default comparison (operator <):
    std::sort(tmp.begin(), tmp.begin() + this->_add);//sort in rang;
    std::reverse(tmp.begin(), tmp.begin() + this->_add); // 5, 3, 2, 1
    
    int minSpan = tmp[0] - tmp[1];//2
    for(unsigned int i = 1; i <= this->_add - 2; i++){
        if ((tmp[i] - tmp[i + 1]) < minSpan) //(3-2=1) < 2? change 
            minSpan = tmp[i] - tmp[i + 1];
    }
    return minSpan; 
}
    
int Span::longestSpan(){  //最长-最短得道最长距离
    if (this->_add <= 1)
        throw Span::cannotFindLong();
    std::vector<int>::iterator maxPosition = max_element(myvector.begin(), myvector.begin() + this->_add);
    std::vector<int>::iterator minPosition = min_element(myvector.begin(), myvector.begin() + this->_add);
    int maxSpan = *maxPosition - *minPosition;
    return maxSpan;
}

const char *Span::cannotAddNum::what() const throw() {
    return "Cannot Add Number! is Full!";
}

const char *Span::cannotFindShort::what() const throw() {
    return "Cannot Find Shortest Span Number!";
}

const char *Span::cannotFindLong::what() const throw() {
    return "Cannot Find longest Span Number!";
}



