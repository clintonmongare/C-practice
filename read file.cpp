#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
string myText;

  ifstream MyReadFile("clinton.txt");

  while (getline (MyReadFile, myText)) {
    std::cout << myText << '\n';
  }
MyReadFile.close();
}
