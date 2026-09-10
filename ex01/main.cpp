/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 10:56:20 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/10 16:37:17 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <list>

int main() {

  std::cout << "Default subject test ---\n";

  Span sp = Span(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  // --------------------------------------------------------------------------

  std::cout << "\nTest shortestSpan throws exception with size 0:\n";

  Span sp1 = Span(5);

  try {
    std::cout << sp1.shortestSpan() << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  // --------------------------------------------------------------------------

  std::cout << "\nTest longestSpan throwns exception with size 0:\n";

  try {
    std::cout << sp1.longestSpan() << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  // --------------------------------------------------------------------------

  std::cout << "\nTest shortestSpan throws exception with size 1:\n";

  sp1.addNumber(-100);

  try {
    std::cout << sp1.shortestSpan() << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  // --------------------------------------------------------------------------

  std::cout << "\nTest longestSpan throws exception with size 1:\n";

  try {
    std::cout << sp1.longestSpan() << std::endl;
  }
  catch (const std::exception& e) { 
    std::cout << e.what() << std::endl;
  }

  // --------------------------------------------------------------------------

  std::cout << "\nTest addNumber throws exception after max size:\n";

  sp1.addNumber(3);
  sp1.addNumber(6);
  sp1.addNumber(50);
  sp1.addNumber(100);

  try {
    sp1.addNumber(12);
  }
  catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  // --------------------------------------------------------------------------

  std::cout << "\nTest shortest and longestSpane (3 and 200 expected):\n";

  std::cout << sp1.shortestSpan() << std::endl;
  std::cout << sp1.longestSpan() << std::endl;

  // --------------------------------------------------------------------------

  std::cout << "\nTest addMultiple using range of iterators (20k elements vector):\n";

  std::srand(static_cast<unsigned int>(time(NULL)));

  std::vector<int> ints;
  for (int i = 0; i != 20000; i++) {
    ints.push_back(std::rand());
  }

  Span sp2(20000);
  sp2.addMultiple(ints.begin(), ints.end());

  std::cout << sp2.shortestSpan() << std::endl;
  std::cout << sp2.longestSpan() << std::endl;

  // --------------------------------------------------------------------------

  std::cout << "\nTest addMultiple using range of iterators (20k elements list):\n";

  std::list<int> ints_list;
  for (int i = 0; i != 20000; i++) {
    ints_list.push_back(std::rand());
  }

  Span sp3(20000);
  sp3.addMultiple(ints_list.begin(), ints_list.end());

  std::cout << sp3.shortestSpan() << std::endl;
  std::cout << sp3.longestSpan() << std::endl;

  return 0;
}