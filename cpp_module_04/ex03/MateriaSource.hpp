/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:28:28 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/16 17:47:36 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#define SOURCE 4

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_source[SOURCE];
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &src);
        virtual ~MateriaSource(void);
        
        MateriaSource &	operator=(MateriaSource const & rhs);
        
        void learnMateria(AMateria* );
        AMateria* createMateria(std::string const & type);
};

#endif