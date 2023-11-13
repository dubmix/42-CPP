/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:13:42 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/30 09:16:43 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP

# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
    private:
            std::string _target;

    public:
            ShrubberyCreationForm();
            ShrubberyCreationForm(std::string const &target);
            ShrubberyCreationForm(ShrubberyCreationForm const &src);
            ~ShrubberyCreationForm();

            ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);

            void execute(Bureaucrat const &executor) const;
};

#endif