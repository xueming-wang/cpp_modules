/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:55:35 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/26 18:50:46 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> //INPUT OUTPUT

int main(int ac, char **av) {

if (ac != 4) {
    std::cout << "usage : ./replace [filename] [s1] [s2]" << std::endl;
    return ;
}

std::string filename = av[1];
std::string s1 = av[2]; 
std::string s2 = av[3];
std::string replacefile = filename + ".repalce";

std::ifstream ifs(filename); //open file
if (!ifs) //check file
{
    std::cout << "open [" << filename << "] failed !" << std::endl;
    return ;
}
std::ofstream ofs(replacefile); //Create a file and write newfile
if (!ofs) //check file
{
    std::cout << "open [" << replacefile << "] failed !" << std::endl;
    return;
}


ofs << s2 << std::endl; //wite s2 replace s1


ifs.close();
ofs.close();

    return (0);
}