#include <iostream>
using namespace std;

int main(){

  int n, i;

  cout << "Podaj dlugosc ciagu: ";
  cin >> n;

  int tab[n];

  for(i = 0; i < n; i++){
    cin >> tab[i];
  }

  cout << "Odwrotnosc: " << endl;

  for(i = n - 1; i >= 0; i--){
    cout << tab[i] << endl;
  }

  return 0;

}
