#include <iostream>
using namespace std;

class Animal {
public:
  void animalSound() {
    std::cout << "The animal makes a sound " << '\n';
  }
};
class Pig:public Animal {
public:
  void animalSound() {
    std::cout << "The pig says: wee wee " << '\n';
  }
};
class Dog: public Animal {
public:
  void animalSound() {
    std::cout << "The dog says: bow bow " << '\n';
  }
};
int main()
{
  Animal aniobj;
  Pig pigobj;
  Dog dogobj;

  aniobj.animalSound();
  pigobj.animalSound();
  dogobj.animalSound();
  return 0;
}
