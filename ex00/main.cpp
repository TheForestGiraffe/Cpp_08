/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:07:10 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/08 14:58:54 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
#include <vector>
#include <list>
#include <iostream>

int main() {

  std::cout << "Vector container:\n";

  std::vector<int> integers;
  integers.push_back(5);
  integers.push_back(9);
  integers.push_back(10);

  std::vector<int>::iterator vector_iterator = easyfind(integers, 9);
  std::cout << *vector_iterator << std::endl;

  try {
    vector_iterator = easyfind(integers, 11);
    std::cout << *vector_iterator << std::endl;
  } 
  catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << "\nList container:\n";

  std::list<double> doubles;
  doubles.push_back(5);
  doubles.push_front(10);
  doubles.push_back(2345.12);

  std::list<double>::iterator list_iterator = easyfind(doubles, 10);
  std::cout << *list_iterator << std::endl;

  try {
    list_iterator = easyfind(doubles, 23);
    std::cout << *list_iterator << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << "\nDeque container:\n";
//TODO
  std::list<double> doubles;
  doubles.push_back(5);
  doubles.push_front(10);
  doubles.push_back(2345.12);

  std::list<double>::iterator list_iterator = easyfind(doubles, 10);
  std::cout << *list_iterator << std::endl;

  try {
    list_iterator = easyfind(doubles, 23);
    std::cout << *list_iterator << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  return 0;

}