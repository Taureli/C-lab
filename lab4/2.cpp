#include <iostream>
#include <fstream>

using namespace std;

int main(){

  int znak, i;
  int tab[26] = {0};

  FILE *plik = fopen("plik.txt", "r");

  znak = fgetc(plik);

  while(znak != EOF){

    if((int)znak >= 'a' && (int)znak <= 'z'){
      tab[(int)znak - 97] ++;
    } else if((int)znak >= 'A' && (int)znak <= 'Z'){
      tab[(int)znak - 65] ++;
    }

    znak = fgetc(plik);

  }

  fclose(plik);

  for(i = 0; i < 26; i++){
    cout << (char)(i + 97) << ": " << tab[i] << endl;
  }

  return 0;

}
