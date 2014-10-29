#include <iostream>
using namespace std;

float oblicz(float x){

  float y;

  if(x <= 44490){
    y = x * 0.19;
  } else if(x > 44490 && x <= 85528){
    y = x * 0.49;
  } else if(x > 85528){
    y = x * 0.59;
  } else {
    y = -1;
  }

  return y;

}

int main(){

  float zarobek, podatek;

  cout << "Podaj zarobki: ";
  cin >> zarobek;

  podatek = oblicz(zarobek);

  if(podatek > 0)
    cout << "Wynik: " << podatek << endl;
  else
    cout << "Podano bledna wartosc" << endl;

  return 0;
}
