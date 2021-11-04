/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:42 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/04 18:55:04 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
        
    public:
        Point(void);
        Point(Point const &src);
        Point(Fixed const x, Fixed const y);
        ~Point(void);

        Point   &operator = (Point const &rhs);

        Fixed getX(void) const;
        Fixed getY(void) const;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif