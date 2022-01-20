#include <iostream>
using namespace std;
int main()
{
  int a,b;
  a = 10;
  b = 20;
  if ( a > b) {
    std::cout << "Nice pick" << '\n';
  }
  else if (a != 10) {
    /* code */
    std::cout << "a is correct." << '\n';
  }
  else {
    std::cout << "Unkown choice" << '\n';
  }
  return 0;
}
