#include <iostream>

using namespace std;

int main()
{
    int zmienna = 10;
    cout << "wartosc: " << zmienna << " adres: " << &zmienna << " Wysuplanie wartosci: " <<*&zmienna << endl;

    int * wsk; // wskaŸnik na int

    wsk = &zmienna; // wsk zawiera adres komórki w której jest wartoœæ naszej zmiennej int

    cout << "Wysuplanie spod wsk: " << *wsk << endl;

    *wsk = 20; // przypisanie 20 do adresu komórki na ktora pokazuje wskaznik

    cout << "Wysuplanie spod wsk: " << *wsk << endl;

    int zmienna2 = 12;

    wsk = &zmienna2;

    cout << "Wysuplanie spod wsk: " << *wsk << endl;

    int * const wsk_staly = &zmienna2; // wskaŸnik sta³y - musi byc zdefiniowany podczas deklaracji. Nie mo¿na przypisaæ
    // wskaŸnikowi innej zmiennej, ale mo¿na zmieniaæ wartoœæ

    const int * wsk_na_stala_wartosc;
    wsk_na_stala_wartosc = &zmienna; // nie mo¿na zmieniæ wartoœci zmiennej poprzez wskaŸnik

    const int * const wsk_staly_na_stala_wartosc = &zmienna; // po³¹czenie dwóch poprzednich

    int * zwykly_wsk = &zmienna2;

    int ** z = &zwykly_wsk;

    cout <<

    return 0;
}
