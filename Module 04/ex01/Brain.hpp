/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:27:42 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 08:07:10 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>

class Brain
{
    public:
            Brain();
            Brain(Brain const &copy);
            ~Brain();

            Brain &operator=(Brain const &copy);

            std::string getIdeas(int index) const;
    
    private:
            std::string _ideas[100];
};

#endif