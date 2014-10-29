#include <iostream>
using namespace std;

float pi = 3.14;

int main(){

  float r, wynik;

  cout << "Podaj r: ";
  cin >> r;

  wynik = pi * r * r;

  cout << "Wynik: " << wynik << "\n";


  return 0;
}
