#include <iostream>
using namespace std;

int main(){

  struct User{
      string imie;
      string nazwisko;
      union{
          char email[50];
          char telefon[50];
      };
  };

  int i;
  User user;

  cout << "Podaj imie: ";
  cin >> user.imie;
  cout << "Podaj nazwisko: ";
  cin >> user.nazwisko;

  cout << "Email = 1, Telefon = 2";
  cin >> i;

  if(i == 1){
    cout << "Podaj adres email: ";
    cin >> user.email;
  } else {
    cout << "Podaj numer telefonu: ";
    cin >> user.telefon;
  }

  cout << user.imie << endl;  

  return 0;

}
