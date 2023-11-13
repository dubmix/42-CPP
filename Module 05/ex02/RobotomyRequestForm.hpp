/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 08:47:55 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/30 08:48:36 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    private:
            std::string _target;

    public:
            RobotomyRequestForm();
            RobotomyRequestForm(std::string const &target);
            RobotomyRequestForm(RobotomyRequestForm const &src);
            ~RobotomyRequestForm();

            RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

            void execute(Bureaucrat const &executor) const;
};

#endif