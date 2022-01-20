#include <iostream>
using namespace std;
int main()
{
  char grade;
  std::cout << "Enter any character to know the grade: " << '\n';
  std::cin >> grade;
  switch (grade) {
    case 'A':
    std::cout << "Excellent." << '\n';
    break;

    case 'B':
    std::cout << "Well done." << '\n';
    break;

     case 'C':
     std::cout << "Thats a pass." << '\n';
     break;

     case 'D':
     std::cout << "Thats a fail." << '\n';
     break;

     Default:
     std::cout << "Work hard anyway." << '\n';
     break;
  }
  return 0;
}
