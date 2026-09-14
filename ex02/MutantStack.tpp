/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 11:13:40 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/14 15:19:32 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() {}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& Other) : std::stack<T, Container>(Other) {}

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& Other) {
  if (this != &Other) {
    this->std::stack<T, Container>::operator=(Other);
  }
  return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
  return this->std::stack<T, Container>::c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
  return this->std::stack<T, Container>::c.end();
}