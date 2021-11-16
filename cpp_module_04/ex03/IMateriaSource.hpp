/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:08:18 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/16 17:32:12 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
       public:
              virtual ~IMateriaSource() {}
              virtual void learnMateria(AMateria* ) = 0;
              virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif