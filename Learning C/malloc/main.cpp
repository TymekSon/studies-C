#include <iostream>

using namespace std;

int main()
{
    int * dane;
    int * rozmiar;

    cin >> rozmiar;

    dane = (int *) malloc(rozmiar * sizeof(int));

    cout << dane;
    return 0;
}
