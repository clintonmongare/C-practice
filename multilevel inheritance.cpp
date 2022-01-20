#include <iostream>
using namespace std;

class MyClass {
public:
  void myFunction() {
    std::cout << "Some content in parent class." << '\n';
  }
};
class MyChild: public MyClass {
public:
  void printHello() {
    std::cout << "Hello  programmer are you surprised?" << '\n';
  }

};
class MyGrandChild: public MyChild {

};

int main()
{
  MyGrandChild obj;
  obj.printHello();
  obj.myFunction();
  return 0;
}
