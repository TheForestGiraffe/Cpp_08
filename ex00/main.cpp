/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:07:10 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/08 16:31:07 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
#include <vector>
#include <list>
#include <deque>
#include <iostream>

int main() {

  std::cout << "Vector container:\n";

  std::vector<int> int_vector;
  int_vector.push_back(5);
  int_vector.push_back(9);
  int_vector.push_back(10);

  std::cout << "Looking for 9...\n";
  std::vector<int>::iterator vector_iterator = easyfind(int_vector, 9);
  std::cout << "Found: " << *vector_iterator << std::endl;

  try {
    std::cout << "Looking for 11...\n";
    vector_iterator = easyfind(int_vector, 11);
    std::cout << *vector_iterator << std::endl;
  } 
  catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << "\nList container:\n";

  std::list<int> int_list;
  int_list.push_back(5);
  int_list.push_front(10);
  int_list.push_back(2345);

  std::cout << "Looking for 10...\n";
  std::list<int>::iterator list_iterator = easyfind(int_list, 10);
  std::cout << "Found: " << *list_iterator << std::endl;

  try {
    std::cout << "Looking for 23...\n";
    list_iterator = easyfind(int_list, 23);
    std::cout << "Found: " << *list_iterator << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << "\nDeque container:\n";

  std::deque<int> int_deque;
  int_deque.push_back(5);
  int_deque.push_front(10);
  int_deque.push_back(2345);

  std::cout << "Looking for 10...\n";
  std::deque<int>::iterator deque_iterator = easyfind(int_deque, 10);
  std::cout << "Found: " << *deque_iterator << std::endl;

  try {
    std::cout << "Looking for 23...\n";
    deque_iterator = easyfind(int_deque, 23);
    std::cout << "Found: " << *deque_iterator << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}