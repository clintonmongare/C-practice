#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
int main()
{
  int firstNum = 10;
  int secondNum = 20;
   std::cout << "Before swap: " << '\n';
   std::cout << firstNum << secondNum << '\n';

   swapNums(firstNum, secondNum);
   std::cout << "After swap: " << '\n';
   std::cout << firstNum<< secondNum << '\n';
}
