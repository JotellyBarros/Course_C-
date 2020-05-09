/*
 * Copyright (c) 2020 Jotelly Barros. All rights reserved.
 */

#include <iostream>
#include <string>

#include "my_utils.hpp"

int main() {
  Shelves shelves_01;
  shelves_01.Addbook("Charles Lamb");
  shelves_01.Addbook("Bores Carter");
  shelves_01.Addbook("Mateus Nascimento");


  shelves_01.PrintState();
  return 0;
}
 