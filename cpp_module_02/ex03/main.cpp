/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:32 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/07 13:10:30 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#define TESTS 7
int main() {
    
        Point const 	a(0, 0);
		Point const 	b(10, 30);
		Point const 	c(20, 0);
		Point			*points = new Point[TESTS];

		points[0] = Point(10, 15);
		points[1] = Point(30, 15);
		points[2] = Point(0, 0);
		points[3] = Point(10, 30);
		points[4] = Point(20, 0);
		points[5] = Point(15, 2);
		points[6] = Point(10, 29);

	
		std::cout << "a : " << "(" << a.getX().toFloat() << ", " << a.getY().toFloat() << ")" << std::endl;
		std::cout << "b : " << "(" << b.getX().toFloat() << ", " << b.getY().toFloat() << ")" << std::endl;
		std::cout << "c : " << "(" << c.getX().toFloat() << ", " << c.getY().toFloat() << ")" << std::endl;
		std::cout << std::endl;
	
		for (int i = 0; i < TESTS; ++i) {
			std::cout << "(" << points[i].getX() << ", " << points[i].getY() << ") ";
			std::cout << (bsp(a, b, c, points[i])? "true" : "false") << std::endl;
		}

		delete [] points;
     

	return 0;
}