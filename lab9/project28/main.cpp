#include <iostream>

using namespace std;

int move1left(int*tab, unsigned int n){
    int temp = tab[0];
    for(int i = 0; i < n-1; i++){
        tab[i] = tab[i+1];
    }
    tab[n-1] = temp;
}

int main()
{
    unsigned int n = 10;
    int * tab = new int[n];

    for(int i = 0; i < n; i++){
        tab[i] = ((i^2)+3)%7;
    }

    for(int i = 0; i < n; i++){
        cout << tab[i] << "  ";
    }
    cout << endl;

    move1left(tab, n);

    for(int i = 0; i < n; i++){
        cout << tab[i] << "  ";
    }
    cout << endl;

    return 0;
}
