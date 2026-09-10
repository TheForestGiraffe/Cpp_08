/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 10:15:16 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/10 10:37:43 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span& other) : size(other.size), integers(other.integers) {}

Span& Span::operator=(const Span& other) {
  if (this != &other) {
    size = other.size;
    integers = other.integers;
  }
  return *this;
}

Span::~Span() {}
