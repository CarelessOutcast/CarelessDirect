#include <iostream>

#include "gui.h"

int
main (int argc, char *argv[])
{
  std::cout << gui::getString ();
  std::cout << "Build Success :) " << std::endl;
  return 0;
}
