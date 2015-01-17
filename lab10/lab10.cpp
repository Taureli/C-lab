#include "lab10.h"
#include <iostream>
using namespace std;

void informacja1(Pojazd p){
    p.info();
}

void informacja2(Pojazd & p){
    p.info();
}

void informacja3(Pojazd * p){
    //p.info();
}

int main(){

    cout << "Konstruktor a:" << endl;
    SamochodOsobowy a(1, 2, 3);

    cout << endl << "Konstruktor b:" << endl;
    SamochodDostawczy b(4, 5, 6, 7);

    //cout << endl << "Konstruktor c:" << endl;
    //Samochod c(8, 9, 10);

    cout << endl << "Info a:" << endl;
    informacja1(a);

    cout << endl << "Info b:" << endl;
    informacja2(b);

    //cout << endl << "Info c:" << endl;
    //informacja3(c);

    return 0;

}
