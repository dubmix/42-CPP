/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:14:08 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/13 07:30:39 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP

# define RPN_HPP

# include <iostream>
# include <sstream>
# include <stack>
# include <stdlib.h>

class RPN
{
    private:
            int _result;
            std::stack<int> _stack;

    public:
            RPN();
            RPN(RPN const &src);
            ~RPN();

            RPN &operator=(RPN const &src);

            void process(std::string const &str);
            void calculate(int n1, int n2, char c);

            int getResult();
    
        class Error: public std::exception
        {
                private:
                        std::string _msg;
                public:
                        Error(std::string const &msg): _msg(msg) {}
                        virtual const char *what() const throw()
                        {return(_msg.c_str());}
                        virtual ~Error() throw() {}
        };
};

#endif