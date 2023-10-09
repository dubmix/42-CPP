/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 06:58:05 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/08 09:38:50 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    std::cout << "Mutant stack: " << std::endl;

    mstack.push(8);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(9);
    mstack.push(10);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    
    MutantStack<int> s(mstack);
    MutantStack<int> t = mstack;
    std::cout << "/ " << s.top() << " " << t.top() << std::endl;
    std::cout << std::endl;

    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    
    //-------------------------------------------//

    std::list<int> lst;
    //std::stack<int, std::list<int> > li(lst);

    std::cout << "List container: " << std::endl;

    lst.push_back(8);
    lst.push_back(17);
    
    std::cout << lst.back() << std::endl;

    lst.pop_back();

    std::cout << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(9);
    lst.push_back(10);

    std::list<int>::iterator lst_it = lst.begin();
    std::list<int>::iterator lst_ite = lst.end();

    while (lst_it != lst_ite)
    {
        std::cout << *lst_it << " ";
        ++lst_it;
    }

    std::list<int> l(lst);
    std::cout << "/ " << l.front() << " " << l.back();
    std::cout << std::endl;

    return (0);
}