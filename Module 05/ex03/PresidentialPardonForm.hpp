/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 07:24:06 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/30 08:18:40 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    private:
            std::string _target;

    public:
            PresidentialPardonForm();
            PresidentialPardonForm(std::string const &target);
            PresidentialPardonForm(PresidentialPardonForm const &src);
            ~PresidentialPardonForm();

            PresidentialPardonForm &operator=(PresidentialPardonForm const &src);

            void execute(Bureaucrat const &executor) const;
};

#endif