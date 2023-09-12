/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:22:26 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/12 06:42:01 by pdelanno         ###   ########.fr       */
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
            Fixed(Fixed const &copy);
            Fixed &operator=(Fixed const &copy);
            bool operator>(Fixed const &copy);
            bool operator<(Fixed const &copy);
            bool operator>=(Fixed const &copy);
            bool operator<=(Fixed const &copy);
            bool operator==(Fixed const &copy);
            bool operator!=(Fixed const &copy);
            
            Fixed operator+(Fixed const &copy);
            Fixed operator-(Fixed const &copy);
            Fixed operator*(Fixed const &copy);
            Fixed operator/(Fixed const &copy);

            Fixed &operator++(void);
            Fixed &operator--(void);
            Fixed operator++(int);
            Fixed operator--(int);

            static Fixed &min(Fixed &a, Fixed &b);
            static Fixed &max(Fixed &a, Fixed &b);
            static const Fixed &min(Fixed const &a, Fixed const &b);
            static const Fixed &max(Fixed const &a, Fixed const &b);
            
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