/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:09:32 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/04 19:04:19 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#define TESTS 7
int main() {
    
    // Point p1,p2,p3,point;
    
    // float p1_x =  p1.getX().toFloat();
    // float p1_y = p1.getY().toFloat();

    // float p2_x =  p1.getX().toFloat();
    // float p2_y = p1.getY().toFloat();

    // float p3_x =  p1.getX().toFloat();
    // float p3_y = p1.getY().toFloat();

    // float point_x =  point.getX().toFloat();
    // float point_y = point.getY().toFloat();
    
    // std::cin >> p1_x >> p1_y;
    // std::cin >> p2_x >> p2_y;
    // std::cin >> p3_x >> p3_y;
    // std::cin >> point_x >> point_y;
    
    // bool flag = bsq(p1,p2,p3,point);
    // if(flag) puts("Yes");
    // else puts("No");
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
			std::cout << "is inside: " << (bsp(a, b, c, points[i])? "true" : "false") << std::endl;
		}

		delete [] points;
        
    // Point 		a;
	// 	Point 		b(1, 2);
	// 	Point const c(b);
	// 	Point 		d;

	// 	d = c;
	// 	std::cout << "\033[1;32mAssignment\033[0m" << std::endl;
	// 	std::cout << "a.x      : " << a.getX().toFloat() << std::endl;
	// 	std::cout << "a.y      : " << a.getY().toFloat() << std::endl;

	// 	std::cout << "b.x      : " << b.getX().toFloat() << std::endl;
	// 	std::cout << "b.y      : " << b.getY().toFloat() << std::endl;

	// 	std::cout << "c(b).x   : " << c.getX().toFloat() << std::endl;
	// 	std::cout << "c(b).y   : " << c.getY().toFloat() << std::endl;

	// 	std::cout << "(d = c).x: " << d.getX().toFloat() << std::endl;
	// 	std::cout << "(d = c).y: " << d.getY().toFloat() << std::endl;
	// 	std::cout << std::endl;


	return 0;
}