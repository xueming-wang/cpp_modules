/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:18:45 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/17 13:27:45 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *str_toupper(char *str)
{
    int i = 0;
    
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return (str);
    
}
int main(int ac, char **av)
{
    int i = 1;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else 
    {
        while (av[i])
        {
            std::cout << str_toupper(av[i]);
            i++;
        }
        std::cout << std::endl;
        return (0);
    }
}