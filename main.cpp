// Copyright 2022 kbuffardi
#include <iostream>
#include <cstdlib>
#include "GameDie.h"

using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
  if ( argc != 2 || std::atoi(argv[1]) < 1 ) {
    cout << "Incorrect command.\n"
         << "Format: ./Roller <n>\n"
         << "--------------------\n"
         << "Arguments\n"
         << "--------------------\n"
         << "<n> - Required; a number 1 or greater representing the number\n"
         << "      of faces on the die being rolled\n";
  } else {
    int faces = std::atoi(argv[1]);
    GameDie die(faces);
    cout << die.roll() << endl;
  }
  return 0;
}
