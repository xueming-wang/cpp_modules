/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:28:28 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/15 18:42:03 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &src);
        ~MateriaSource();
        
        MateriaSource &	operator=(MateriaSource const & rhs);
        
        void learnMateria(AMateria* );
        AMateria* createMateria(std::string const & type);
};

#endif