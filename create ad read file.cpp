#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // create and open a text  file
  ofstream MyFile("clinton.txt");

// write to the MyFile
MyFile << "Files can be tricky, but it is fun enough!";

// close the Files
MyFile.close();
}
