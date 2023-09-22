/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:22:26 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/22 07:22:47 by pdelanno         ###   ########.fr       */
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
            Fixed(Fixed const &src);
            Fixed &operator=(Fixed const &src);
            
            int     getRawBits(void) const;
            void    setRawBits(int const raw);

    private:
            int                 _fixedPointValue;
            static const int    _fractionalBits;
};

#endif