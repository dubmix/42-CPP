/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:22:26 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/11 08:27:45 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>

class Fixed
{
    public:
            Fixed();
            ~Fixed();
            Fixed(Fixed const &copy);
            Fixed &operator=(Fixed const &copy);
            
            int     getRawBits(void) const;
            void    setRawBits(int const raw);

    private:
            int                 _fixedPointValue;
            static const int    _fractionalBits;
};

#endif