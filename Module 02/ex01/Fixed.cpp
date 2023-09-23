/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 07:15:38 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/23 07:11:35 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int   Fixed::_fractionalBits = 8;

std::ostream &operator<<(std::ostream &str, Fixed const &fixedNb) // fixedNb is an existing object
{
    return (str << fixedNb.toFloat()); // always converts to float from fixed point value
}

Fixed::Fixed(void): _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointValue = src._fixedPointValue;
}

Fixed::Fixed(int const nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = nb << _fractionalBits;
}

Fixed::Fixed(float const nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(nb * (1 << _fractionalBits));  //multiplies by 256, 
    // captures as much precision as possible within the constraints of fractional bits
}

Fixed   &Fixed::operator=(Fixed const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &src)
        return (*this);
    this->_fixedPointValue = src.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

int Fixed::toInt(void) const
{
    return (roundf(this->_fixedPointValue >> _fractionalBits)); // divides by 256
}

float Fixed::toFloat(void) const
{
    float n;

    n = static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits);
    return (n);
}