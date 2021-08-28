#include <iostream>
#include <string.h>
#include <hand.h>

using std::string;
using std::cin, std::cout, std::endl;

int main(int argc, char *argv[])
{
  cout << "Welcome to Leeway!" << endl;
  cout << "\nSelect an option:" <<endl;
  cout << "1. Start a new game" << endl;

  char input;
  cin >> input;
  switch (input) {
    case '1':
      cout << "Starting a new game";
      break;
  }
}
