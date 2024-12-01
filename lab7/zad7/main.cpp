#include <iostream>
#include <stdlib.h>

using namespace std;

void przypisz(const int *wsk_stala, int *wsk_zmienna){
    *wsk_zmienna = *wsk_stala;
}

int main()
{
    const int stala = 12;
    int zmienna = 15;
    const int * wsk1 = &stala;
    int * wsk2 = &zmienna;

    cout<<"ws = "<<*wsk1<<endl;
    cout<<"wz = "<<*wsk2<<endl;

    przypisz(wsk1, wsk2);

    cout<<"ws = "<<*wsk1<<endl;
    cout<<"wz = "<<*wsk2<<endl;

    return 0;
}
