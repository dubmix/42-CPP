/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:27:42 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/28 07:06:36 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    public:
            Brain();
            Brain(Brain const &src);
            ~Brain();

            Brain &operator=(Brain const &src);

            std::string getIdeas(int index) const;
    
    private:
            std::string _ideas[100];
};

#endif