/*
 * Copyright (c) 2020 Jotelly Barros. All rights reserved.
 */

#include "my_utils.hpp"

#include <iostream>
#include <list>
#include <set>  // to using set
#include <string>

// Default Constructor Shelves
Shelves::Shelves() {
  // std::cout << "\n- Default Constructor -\n" << std::endl;
}

// Default Destructor Shelves
Shelves::~Shelves() {
  // std::cout << "\n- Default Destructor -\n" << std::endl;
}

void Shelves::PrintState() {
  std::cout << "\n PrintState: " << getAuthor() << std::endl;

  // Printing of size set
  std::cout << "\nSomeList Size = " << Shelves::someList.size()  //
            << " Elements." << std::endl;

  // Printig all elements of set using iterator
  std::list<Shelves>::iterator it = Shelves::someList.begin();

  for (it = Shelves::someList.begin(); it != Shelves::someList.end(); it++) {
    std::cout << *it << std::endl;
    // std::cout << " Element" << std::endl;
  }
}

std::string Shelves::getAuthor() const {
  return author_;
}

void Shelves::setAuthor(const std::string &value) {
  author_ = value;
}

void Shelves::Addbook(std::string value) {
  setAuthor(value);
  std::cout << "\n author : " << getAuthor() << std::endl;

  // Add an integer to the beginning of the list
  someList.push_back(Shelves());
  // someList.insert(someList.begin(), Shelves);
}
