#include <iostream>
using namespace std;

int main(){

  string inp, inp2;
  int i;

  cout << "Podaj slowo: ";
  cin >> inp;

  for(i = inp.length() - 1; i >= 0; i--){
    inp2 += inp.at(i);
  }

  cout << inp2 << endl;

  if(inp == inp2){
    cout << "Wyraz jest palindromem" << endl;
  } else {
    cout << "Wyraz nie jest palindromem" << endl;
  }

  return 0;
}
