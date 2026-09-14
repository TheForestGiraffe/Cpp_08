/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 11:13:40 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/14 11:45:36 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& Other) : std::stack<T>(Other) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& Other) {
  if (this != &Other) {
    this->std::stack<T>::operator=(Other);
  }
  return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {};