#include <iostream>
#include <fstream>

using namespace std;

int main(){

  char znak;
  
  FILE *plik = fopen("plik.txt", "r");

  znak = fgetc(plik);

  while(znak != EOF){

    cout << znak;

    znak = fgetc(plik);

  }

  fclose(plik);

  return 0;

}
