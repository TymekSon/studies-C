#include <iostream>

using namespace std;

int main()
{
    int zmienna = 10;
    cout << "wartosc: " << zmienna << " adres: " << &zmienna << " Wysuplanie wartosci: " <<*&zmienna << endl;

    int * wsk; // wska�nik na int

    wsk = &zmienna; // wsk zawiera adres kom�rki w kt�rej jest warto�� naszej zmiennej int

    cout << "Wysuplanie spod wsk: " << *wsk << endl;

    *wsk = 20; // przypisanie 20 do adresu kom�rki na ktora pokazuje wskaznik

    cout << "Wysuplanie spod wsk: " << *wsk << endl;

    int zmienna2 = 12;

    wsk = &zmienna2;

    cout << "Wysuplanie spod wsk: " << *wsk << endl;

    int * const wsk_staly = &zmienna2; // wska�nik sta�y - musi byc zdefiniowany podczas deklaracji. Nie mo�na przypisa�
    // wska�nikowi innej zmiennej, ale mo�na zmienia� warto��

    const int * wsk_na_stala_wartosc;
    wsk_na_stala_wartosc = &zmienna; // nie mo�na zmieni� warto�ci zmiennej poprzez wska�nik

    const int * const wsk_staly_na_stala_wartosc = &zmienna; // po��czenie dw�ch poprzednich

    int * zwykly_wsk = &zmienna2;

    int ** z = &zwykly_wsk;

    cout <<

    return 0;
}
