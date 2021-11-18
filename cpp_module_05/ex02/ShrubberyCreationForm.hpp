/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:27:01 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/18 17:37:35 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUVVERTGREATIONFORM_HPP
# define SHRUVVERTGREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string _shrubbery;
        
    public:
        ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const & shrubbery);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		virtual ~ShrubberyCreationForm(void);
        
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

        void execute(Bureaucrat const & executor) const;
};


#endif