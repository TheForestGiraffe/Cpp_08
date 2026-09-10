/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 10:15:16 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/10 10:55:18 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <stdexcept>

Span::Span(unsigned int N) : max_size(static_cast<std::size_t>(N)) {}

Span::Span(const Span& other)
    : max_size(other.max_size),
      integers(other.integers) {}

Span& Span::operator=(const Span& other) {
  if (this != &other) {
    max_size = other.max_size;
    integers = other.integers;
  }
  return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
  if (integers.size() == max_size) {
    throw std::runtime_error("Span > addNumber: maximum size exceeded.");
  }
  integers.push_back(number);
}