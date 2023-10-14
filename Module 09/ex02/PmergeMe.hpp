/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 07:09:02 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/14 14:47:47 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP

# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <sys/time.h>
# include <stdlib.h>
# include <cstring>
# include <vector>
# include <deque>
# include <set>

class PmergeMe
{
    private:
            std::vector<int>    _vector;
            std::deque<int>     _deque;

            double _deltaTimeVector;
            double _deltaTimeDeque;
            
            int                 _size;
            bool                _isSorted;
            
    public:
            PmergeMe();
            PmergeMe(int argc, char *argv[]);
            PmergeMe(PmergeMe const &src);
            ~PmergeMe();

            PmergeMe &operator=(PmergeMe const &src);

            double getTime();
            double deltaTime(long long time);
            bool isNumber(char *argv);
            void printSeq();
            void printTime(std::string str);
            void checkDuplicates();
            std::vector<int> parseArgsVector(int argc, char *argv[]);
            std::deque<int> parseArgsDeque(int argc, char *argv[]);

            template <typename T>
            void FordJohnson(T &container);
            
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