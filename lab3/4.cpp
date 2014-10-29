#include <iostream>
using namespace std;

int main(){

  string inp;
  int wynik = 0;
  int i;

  cout << "Podaj liczbe: ";
  cin >> inp;

  for(i = 0; i < inp.length(); i++){
    wynik += inp.at(i) - '0';
  }

  cout << "Wynik: " << wynik << endl;

  return 0;

}
