#include <iostream>
#include <math.h>
using namespace std;

float x = 0, y, z;

float wczytaj(){

  while (x <= 0){
    cout << "Podaj x: ";
    cin >> x;
  }

  return x;
}

int main(){

  //wczytaj();
  cout << "Podaj x: ";
  cin >> x;

  if(x != 0)
    y = pow(2, x) + 1/x;
  if(x >= 0)
    z = 2*x + sqrt(x);

  cout << "Y: " << y << " ; Z: " << z << endl;

  if(y > z){
    cout << "Y wieksze od Z" << endl;
  } else {
    cout << "Z wieksze od Y" << endl;
  }


  return 0;
}
