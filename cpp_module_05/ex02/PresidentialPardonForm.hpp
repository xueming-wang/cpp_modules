/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:26:52 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/18 17:41:46 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _shrubbery;
        
    public:
        PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const & shrubbery);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		virtual ~PresidentialPardonForm(void);
        
        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

        void execute(Bureaucrat const & executor) const;
};


#endif