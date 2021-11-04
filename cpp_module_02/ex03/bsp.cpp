/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:25 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/04 19:06:21 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
//(p2.x-p1.x)*(p3.y-p1.y) - (p2.y-p1.y)*(p3.x-p1.x);
float product(Point p1, Point p2, Point p3) {
    return ((p2.getX().toFloat() - p1.getX().toFloat()) * (p3.getY().toFloat() - p1.getY().toFloat())
         - (p2.getY().toFloat() - p1.getY().toFloat())* (p3.getX().toFloat() - p1.getX().toFloat()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {

    if(product(a, b, c) < 0)
        return bsp(a, c, b, point); ///????/
    if(product(a, b, point) > 0 && product(b, c, point) > 0 && product(c, a, point) > 0)
        return (true);
    return (false);
}