#include <iostream>
using namespace std;
int main()
{
  for (int a = 0; a < 10; a++) {
    if (a == 4) {
      break;
    }
    std::cout << a << '\n';
    if ( a == 2) {
      continue;
    }
    std::cout << a << '\n';
  }
}
