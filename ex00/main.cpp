/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:07:10 by pecavalc          #+#    #+#             */
/*   Updated: 2026/09/07 14:45:30 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
#include <vector>
#include <iostream>

int main() {

  std::vector<int> integers;
  integers.push_back(5);
  integers.push_back(9);
  integers.push_back(10);

  std::vector<int>::iterator it = easyfind(integers, 9);
  std::cout << *it << std::endl;

  try {
    it = easyfind(integers, 11);
    std::cout << *it << std::endl;
  } 
  catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  return (0);

}