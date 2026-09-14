/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:55:08 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/14 11:56:38 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
  public:
    typedef typename std::stack<T>::container_type::iterator iterator;

    MutantStack();
    MutantStack(const MutantStack& Other);
    MutantStack& operator=(const MutantStack Other);
    ~MutantStack();

    iterator begin();
    iterator end();
};

#include "MutantStack.tpp"

#endif