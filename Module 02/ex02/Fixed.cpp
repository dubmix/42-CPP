/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 07:15:38 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/23 07:11:45 by pdelanno         ###   ########.fr       */
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
    this->_fixedPointValue = roundf(nb * (1 << _fractionalBits));
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
    return (roundf(this->_fixedPointValue >> _fractionalBits));
}

float Fixed::toFloat(void) const
{
    float n;

    n = static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits);
    return (n);
}

bool Fixed::operator>(Fixed const &src)
{
    return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<(Fixed const &src)
{
    return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator>=(Fixed const &src)
{
    return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator<=(Fixed const &src)
{
    return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator==(Fixed const &src)
{
    return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(Fixed const &src)
{
    return (this->getRawBits() != src.getRawBits());
}

Fixed   Fixed::operator+(Fixed const &src)
{
    return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &src)
{
    return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &src)
{
    return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &src)
{
    return (Fixed(this->toFloat() / src.toFloat()));
}

Fixed &Fixed::operator++(void)
{
    ++this->_fixedPointValue;
    return (*this); // using the ref modifies the original object's state directly
}

Fixed &Fixed::operator--(void)
{
    --this->_fixedPointValue;
    return (*this);
}

Fixed   Fixed::operator++(int) // i.e. a++
{
    Fixed tmp;

    tmp = *this;
    tmp._fixedPointValue = this->_fixedPointValue++;
    return (tmp); // _fixedPointValue is incremented, but the return value is the original
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp;

    tmp = *this;
    tmp._fixedPointValue = this->_fixedPointValue--;
    return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)  //perfect example of overloading, needs to work with objects type "fixed"
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
}