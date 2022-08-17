#include <iostream>
#include <string>
using namespace std;

int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = lastName.append(firstName);
  cout << fullName;
  return 0;
}

