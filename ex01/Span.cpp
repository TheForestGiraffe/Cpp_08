/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 10:15:16 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/10 11:40:52 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <stdexcept>
#include <algorithm>

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

unsigned int Span::longestSpan() const {
  if (integers.size() == 0 || integers.size() == 1) {
    throw std::runtime_error("Span > longestSpan: at least 2 numbers needed.");
  }

  double min = *std::min_element(integers.begin(), integers.end());
  double max = *std::max_element(integers.begin(), integers.end());
  return static_cast<unsigned int>(max - min);
}