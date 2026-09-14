/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:55:08 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/14 15:19:31 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
  public:
    typedef typename Container::iterator iterator;

    MutantStack();
    MutantStack(const MutantStack& Other);
    MutantStack& operator=(const MutantStack& Other);
    ~MutantStack();

    iterator begin();
    iterator end();
};

#include "MutantStack.tpp"

#endif