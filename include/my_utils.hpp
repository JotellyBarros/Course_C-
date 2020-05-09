/*
 * Copyright (c) 2020 Jotelly Barros. All rights reserved.
 */

#ifndef MY_UTILS_HPP_
#define MY_UTILS_HPP_

#include <iostream>
#include <string>
#include <list>
// #include <set> // to using set

class Shelves {
 private:
  // Create a list containing integers
  std::list<Shelves> someList;

  // Data of Shelves
  // std::string my_Shelves_;

  std::string author_;
  std::string title_;
  int yer_;

 public:
  // Default Constructor
  Shelves();

  // Default Constructor
  ~Shelves();

  void Addbook(std::string author);

  // Shelves(std::string my_Shelves_);
  // Shelves() {
  //   std::cout << "Hello World!";
  // }

  // void Addbook(std::string , std::string , int yer_);

  void PrintState();

  // Getts and Setters
  std::string getAuthor() const;
  void setAuthor(const std::string &value);
};

#endif  // MY_UTILS_HPP_
