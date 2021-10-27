/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:55:35 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/27 16:28:31 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> //INPUT OUTPUT
#include <string>

int main(int ac, char **av) {

    if (ac != 4) {
        std::cout << "usage : ./replace [filename] [s1] [s2]" << std::endl;
        return (1);
    }

    std::string filename = av[1];
    std::string s1 = av[2]; 
    std::string s2 = av[3];
    std::string replacefile = filename + ".repalce";

    std::ifstream ifs(filename); //open file
    if (!ifs) { //check file 
        std::cout << "open [" << filename << "] failed !" << std::endl;
        return (1);
    }
    std::ofstream ofs(replacefile); //Create a file and write newfile
    if (!ofs) { //check file 
        std::cout << "open [" << replacefile << "] failed !" << std::endl;
        return (1);
    }


    std::string contents;
    std::string::size_type pos;

    while (true) {  //无限循环
        std::getline(ifs, contents);  //读取一行
        while (true) { 
            pos = contents.find(s1);  // find s1
            if (pos != contents.npos){
                contents.erase(pos, s1.size());
                contents.insert(pos, s2);
            }
            else {
                ofs << contents; //把contents的一行写到replace
                break;
            }
        }
        if (ifs.eof() == true)
            break;
        else
            ofs << std::endl; //wite s2 replace s1
        }
    ifs.close();
    ofs.close();
    return (0);
}