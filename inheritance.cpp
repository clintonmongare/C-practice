#include <iostream>
using namespace std;

class Vehicle {
public:
  string brand = "Ford";
  void honk() {
    std::cout << "Tuut, tuut! " << '\n';
  }
};
class Car:public Vehicle {
public:
  string model = "Mustang";
};
int main()
{
  Car mycar;
  mycar.honk();
  std::cout << mycar.brand + " " + mycar.model << '\n';
  return 0;
}
