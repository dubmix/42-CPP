/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 06:49:56 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 06:50:11 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP
    
# include <iostream>
# include <string>

class   Zombie
{
        public:
                    Zombie(std::string name);
                    ~Zombie(void);
                    void announce(void);

        private:
                    std::string _name;
};

#endif
