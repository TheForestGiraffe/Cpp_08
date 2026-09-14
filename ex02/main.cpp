/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 11:52:25 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/14 15:43:21 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
  {
    std::cout << "MutantStack<int>:" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);  
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
    }

    std::stack<int> s(mstack);
    std::cout << std::endl;
  }

  {
    std::cout << "MutantStack<int, std::list<int> >:" << std::endl;
    MutantStack<int, std::list<int> > mstack;
    mstack.push(5);
    mstack.push(17);  
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int, std::list<int> >::iterator it = mstack.begin();
    MutantStack<int, std::list<int> >::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
    }

    std::stack<int, std::list<int> > s(mstack);
    std::cout << std::endl;
  }

  {
    std::cout << "std::list<int>:" << std::endl;
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);  
    std::cout << mstack.back() << std::endl;
    
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
    }

    std::stack<int, std::list<int> > s(mstack);
    std::cout << std::endl;
  }

  return 0;
}