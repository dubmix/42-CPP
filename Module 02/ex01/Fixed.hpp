/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:22:26 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/22 08:39:37 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    public:
            Fixed();
            ~Fixed();
            Fixed(int const nb);
            Fixed(float const nb);
            Fixed(Fixed const &src);
            Fixed &operator=(Fixed const &src);
            
            int     getRawBits(void) const;
            void    setRawBits(int const raw);
            float   toFloat(void) const;
            int     toInt(void) const;

    private:
            int                 _fixedPointValue;
            static const int    _fractionalBits;
};

std::ostream    &operator<<(std::ostream &str, Fixed const &fixedNb);

#endif