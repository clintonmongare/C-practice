#include <iostream>
using namespace std;
int main()
{
  string mystring = "Hello";
  std::cout << mystring[4]<<'\n';
  std::cout <<mystring[1, 2]<<'\n';
  mystring[0] = 'J';
  std::cout <<mystring[0];

}
