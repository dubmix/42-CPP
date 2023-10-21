/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 06:38:42 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/21 08:49:34 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <ctime>
# include <climits>

class Span
{
    private:
            unsigned int _N;
            std::list<int> _list;

    public:
            Span();
            Span(unsigned int N);
            Span(Span const &src);
            ~Span();

            Span &operator=(Span const &src);
            
            void    addNumber(int n);
            void    addALotOfNumbers(std::list<int>::iterator begin, std::list<int>::iterator end);
            int     longestSpan();
            int     shortestSpan();
            
            const std::list<int> *getList() const;
    
    class OutOfRangeException: public std::exception
    {
        private:
                std::string _msg;
        public:
                OutOfRangeException(std::string const &msg): _msg(msg) {}
                virtual const char *what() const throw()
                    {return (_msg.c_str());}
                virtual ~OutOfRangeException() throw() {}
    };
};

std::ostream &operator<<(std::ostream &str, Span const &src);

#endif