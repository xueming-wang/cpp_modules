/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:23:52 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/28 21:01:20 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class span{

    public:
    
        span(unsigned int N);
        ~span(void);    

        void addNumber(int nbr);
        int shortestSpan();
        int longestSpan();
    private:
        
        unsigned int _n;
        span(void);
}
#endif