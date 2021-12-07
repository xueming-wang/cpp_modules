/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:23:50 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/07 19:50:48 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) {}

Span::Span(unsigned int n):_n(n), _alreadyadd(0), myvector(0){}

Span::~Span(void){}

Span::Span(Span const &src) {*this = src;};

void Span::addNumber(int nbr){
    if (this->_alreadyadd == this->_n)
        throw Span::cannotAddNum();
    this->myvector.push_back(nbr);
        ++this->_alreadyadd;
}

Span &Span::operator=(Span const &rhs) {
    if (this == &rhs)
        return *this;
    this->myvector = rhs.myvector;
    this->_alreadyadd = rhs._alreadyadd;
    this->_n = rhs._n;
    return *this;
}

int Span::shortestSpan(){
    if (this->_alreadyadd <= 1)
        throw Span::cannotFindShort();
    std::vector<int>tmp = this->myvector; // using default comparison (operator <):
    std::sort(tmp.begin(), tmp.begin() + this->_alreadyadd);//sort in rang;1, 2, 3, 5
    std::reverse(tmp.begin(), tmp.begin() + this->_alreadyadd); // 5, 3, 2, 1
    
    int minSpan = tmp[0] - tmp[1];// 5 - 3 = 2
    for(unsigned int i = 1; i <= this->_alreadyadd - 2; i++){
        if ((tmp[i] - tmp[i + 1]) < minSpan) //(3-2=1) < 2? change 
            minSpan = tmp[i] - tmp[i + 1];
    }
    return minSpan; 
}
    
int Span::longestSpan(){  //longest valeur - shorest valeur= maxspan
    if (this->_alreadyadd <= 1)
        throw Span::cannotFindLong();
    std::vector<int>::iterator maxPosition = max_element(myvector.begin(), myvector.begin() + this->_alreadyadd);
    std::vector<int>::iterator minPosition = min_element(myvector.begin(), myvector.begin() + this->_alreadyadd);
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

std::vector<int> &Span::getmyvector(){
        return this->myvector;
};

void Span::generate(unsigned int size){
    if (size > this->_n)
        throw Span::cannotFindShort();
    this->myvector.resize(size);
    for(unsigned int i = 0; i < size && this->_alreadyadd <= this->_n; i++)
    {
        this->myvector[i] = i;
        ++this->_alreadyadd;
    }
}


