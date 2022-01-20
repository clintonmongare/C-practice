#include <iostream>
using namespace std;
int main()
{
  string cars[4] = {"volvo", "BMW", "Ford", "Mazda"};
  for (int i = 0; i < 4; i++) {
    std::cout <<i<<": "<<cars[i]<< '\n';
  }
}
