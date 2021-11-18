/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:26:56 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/18 17:38:48 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _shrubbery;
        
    public:
        RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const & shrubbery);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		virtual ~RobotomyRequestForm(void);
        
        RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

        void execute(Bureaucrat const & executor) const;
};


#endif