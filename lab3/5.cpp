#include <iostream>
using namespace std;

int main(){

  const int n = 5, m = 6;
  int i, j;

  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      cout.width(3);
      cout << i * j;
    }
    cout << endl;
  }

  return 0;

}
