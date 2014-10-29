#include<iostream>
using namespace std;

struct TZbior
{
    int wartosc;
    TZbior * next;
};

// zwraca true je�eli wstawi� lub false, gdy x ju� by� w zbiorze
bool wstaw(TZbior*, int);
// wyswietla elementy zbioru
void wyswietl(TZbior*);


int main()
{
    TZbior *zbior = new TZbior;
    zbior->next = NULL;   // brak elementow, koniec listy
    (*zbior).wartosc = 0; // moc zbioru

    wstaw(zbior, 1);
    wstaw(zbior, 4);
    wstaw(zbior, 3);
    wstaw(zbior, 4);
    wstaw(zbior, 1);
    wyswietl(zbior);

    //delete zbior;
}

void wyswietl(TZbior *glowa) {
    TZbior *element = glowa->next;
    cout << "Zbior mocy " << glowa->wartosc << " = { ";
    while (element != NULL) {
        cout << element->wartosc << " ";
        element = element->next;
    }
    cout << "}" << endl;
}

bool wstaw(TZbior *glowa, int x) {
    // czy x jest w zbiorze
    TZbior *element = glowa->next;
    while (element != NULL) {
        if (element->wartosc == x)
            return false;
        element = element->next;
    }
    // dodanie x do zbioru
    TZbior *nowy_element = new TZbior;
    nowy_element->next = glowa->next;
    nowy_element->wartosc = x;
    glowa->next = nowy_element;
    glowa->wartosc += 1;  // zwi�kszenie mocy zbioru
    return true;
}

