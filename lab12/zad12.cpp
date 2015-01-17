#include<stdio.h>
using namespace std;

template <typename T1, typename T2>
class TablicaAsoc
{
    private:
         Lista<T1,T2> l;
    public:
         Tablica();
         ~Tablica();
         virtual T2 & operator[](T1 i);
         int size();
         void show();
         int rozm = 0;
};

TablicaAsoc::Tablica(){

}

TablicaAsoc::~Tablica(){
    cout << "EXTERMINATE" << endl;
}

int TablicaAsoc::size(){
    return this.rozm;
}

void TablicaAsoc::show(){
    return 0;
}

int main(){

    Tablica<string, string> t1;
    cout << t1["ffdf"] << endl;
    t1["d"] = "napis 1";
    t1["e"] = "napis 2";
    t1["fff"] = "napis 3";
    t1.show();
    cout << endl;
    cout << "Rozmiar tablicy: " << t1.size() << endl;

    Tablica<double, char> t2;
    t2[3.2] = 'c';
    t2[3.3] = 'd';
    t2[3.2] = 'e';
    t2.show();

    int i;
    cin >> i;
    return 0;

}
