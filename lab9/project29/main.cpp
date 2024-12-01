#include <iostream>

using namespace std;

int clearRoom(int*tab){
    delete[]tab;
}

int main()
{
    unsigned int n = 10;
    int * tab = new int[n];

    for(int i = 0; i < n; i++){
        cout << tab[i] << endl;
    }

    clearRoom(tab);

    for(int i = 0; i < n; i++){
        cout << tab[i] << endl;
    }

    return 0;
}
