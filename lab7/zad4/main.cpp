#include <iostream>

using namespace std;

void zamien(int & alias1, int & alias2){
    int temp;
    temp = alias1;
    alias1 = alias2;
    alias2 = temp;
}

int main()
{
    int liczba1 = 12;
    int liczba2 = 15;
    int & alias1 = liczba1;
    int & alias2 = liczba2;

    cout<<"Adres liczby1: "<<&liczba1<<"\tWartosc liczby1: "<<liczba1<<endl;
    cout<<"Adres liczby2: "<<&liczba2<<"\tWartosc liczby2: "<<liczba2<<endl;

    zamien(alias1,  alias2);

    cout<<"Adres liczby1: "<<&liczba1<<"\tWartosc liczby1: "<<liczba1<<endl;
    cout<<"Adres liczby2: "<<&liczba2<<"\tWartosc liczby2: "<<liczba2<<endl;

    return 0;
}
