/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:10:32 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/10 15:57:10 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <cstddef>
# include <vector>
# include <iterator>
# include <stdexcept>

class Span {
  public:
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    void addNumber(int number);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

    template <typename Iterator>
    void addMultiple(Iterator first, Iterator last) {
      std::size_t distance = static_cast<std::size_t>(std::distance(first, last));
      if (distance > (max_size - integers.size())) {
        throw std::runtime_error("Span > addMultiple: maximum size exceeded.");
      }
      integers.insert(integers.end(), first, last);
    }

  private:
    Span();
    std::size_t max_size;
    std::vector<int> integers;
};

#endif