/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 07:15:38 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/12 05:59:04 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int   Fixed::_fractionalBits = 8;

std::ostream &operator<<(std::ostream &str, Fixed const &fixedNb)
{
    return (str << fixedNb.toFloat());
}

Fixed::Fixed(void): _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(int const nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = nb << _fractionalBits;
}

Fixed::Fixed(float const nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(nb * (1 << _fractionalBits));
}

Fixed   &Fixed::operator=(Fixed const &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointValue = copy.getRawBits();
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
    return (roundf(this->_fixedPointValue >> _fractionalBits));
}

float Fixed::toFloat(void) const
{
    float n;

    n = static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits);
    return (n);
}