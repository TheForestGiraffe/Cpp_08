/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 10:15:16 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/10 14:44:08 by pecavalc         ###   ########.fr       */
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

unsigned int Span::shortestSpan() const {
  if (integers.size() == 0 || integers.size() == 1) {
    throw std::runtime_error("Span > shortestSpan: at least 2 numbers needed.");
  }

  std::vector<int> integers_copy(integers);
  std::sort(integers_copy.begin(), integers_copy.end());

  std::vector<int>::const_iterator it = integers_copy.begin();
  double span = static_cast<double>(*(it + 1)) - static_cast<double>(*(it));
  double current_span;
  it++;
  while ((it + 1) != integers_copy.end()) {
    current_span = static_cast<double>(*(it + 1)) - static_cast<double>(*(it));
    if (current_span < span) {
      span = current_span;
    }
    it++;
  }

  return static_cast<unsigned int>(span);
}