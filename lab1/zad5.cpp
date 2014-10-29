#include <iostream>
using namespace std;

int fun1(char a){

  cout << "F1: " << (float)a << "\n";

  return 0;

};

int fun2(unsigned int b){

  cout << "F2: " << b << "\n";

  return 0;

};

int fun3(float c){

  cout << "F3: " << c << "\n";

  return 0;

};

int main(){

  float inp;

  cout << "Podaj liczbe: ";
  cin >> inp;

  fun1(inp);
  fun2(inp);
  fun3(inp);

  return 0;

};
