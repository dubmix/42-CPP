/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 07:09:02 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/13 08:41:33 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP

# define PMERGEME_HPP

# include <iostream>
# include <stdlib.h>
# include <vector>
# include <deque>
# include <set>

class PmergeMe
{
    private:
            std::vector<int>    _vector;
            //std::deque<int>     _deque;
            
            int                 _size;
            bool                _isSorted;
            
    public:
            PmergeMe();
            PmergeMe(int argc, char *argv[]);
            PmergeMe(PmergeMe const &src);
            virtual ~PmergeMe();

            PmergeMe &operator=(PmergeMe const &src);

            void printSeq();
            std::vector<int> parseArgsVector(int argc, char *argv[]);

            // template <typename T>
            // void FordJohnson(T &container);
            
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