#ifndef lab10_hpp
#define lab10_hpp
#include <iostream>
using namespace std;

class Pojazd{
    public:
      int maksymalnaPredkosc;
      int maksLiczbaPasazerow;

      virtual void info(){
        cout << "1" << endl;
        cout << "maks predkosc: " << maksymalnaPredkosc << endl;
        cout << "maks pasazerow: " << maksLiczbaPasazerow << endl;
      };

      Pojazd(int x, int y){
          cout << "pojazd" << endl;
          maksymalnaPredkosc = x;
          maksLiczbaPasazerow = y;
      };
};

class Rower: public Pojazd{
    public:
      int liczbaPrzerzutek;

      virtual void info(){
        cout << "2" << endl;
        cout << "maks predkosc: " << maksymalnaPredkosc << endl;
        cout << "maks pasazerow: " << maksLiczbaPasazerow << endl;
        cout << "liczba przerzutek: " << liczbaPrzerzutek << endl;
      };

      Rower(int x, int y, int z): Pojazd(x, y) {
          cout << "rower" << endl;
          liczbaPrzerzutek = z;
      };
};

class RowerGorski: public Rower{
    RowerGorski(int x, int y, int z): Rower(x, y, z){
        cout << "rower gorski" << endl;
    };
};

class Samochod: public Pojazd{
    public:
      int pojemnoscSilnika;

      virtual void info(){
        cout << "3" << endl;
        cout << "maks predkosc: " << maksymalnaPredkosc << endl;
        cout << "maks pasazerow: " << maksLiczbaPasazerow << endl;
        cout << "pojemnosc silnika: " << pojemnoscSilnika << endl;
      };

      Samochod(int x, int y, int a): Pojazd(x, y){
          cout << "samochod" << endl;
          pojemnoscSilnika = a;
      };
};

class SamochodOsobowy: public Samochod{
    public:
      SamochodOsobowy(int x, int y, int a): Samochod(x, y, a){
          cout << "samochod osobowy" << endl;
      };
};

class SamochodDostawczy: public Samochod{
    public:
      int maksMasaZaladunku;

      virtual void info(){
        cout << "4" << endl;
        cout << "maks predkosc: " << maksymalnaPredkosc << endl;
        cout << "maks pasazerow: " << maksLiczbaPasazerow << endl;
        cout << "pojemnosc silnika: " << pojemnoscSilnika << endl;
        cout << "masa zaladunku: " << maksMasaZaladunku << endl;
      };

      SamochodDostawczy(int x, int y, int a, int b): Samochod(x, y, a){
          cout << "samochod dostawczy" << endl;
          maksMasaZaladunku = b;
      };
};

#endif
