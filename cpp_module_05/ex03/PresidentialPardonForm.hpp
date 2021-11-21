/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:26:52 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/21 15:00:10 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string const _target;
        
    public:
        PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const & shrubbery);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		virtual ~PresidentialPardonForm(void);
        
        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
        std::string gettarget(void)const;

        void execute(Bureaucrat const & executor) const;
};


#endif