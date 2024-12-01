#include <iostream>

using namespace std;

int clearTab(unsigned int n, int *wsk_tab){
    for(int i = 0; i < n; i++){
        *wsk_tab = 0;
        *wsk_tab++;
    }
}

int main()
{
    unsigned int n = 12;
    int * tab = new int[n];
    int * wsk = &tab[0];

    clearTab(n, wsk);

    for(int i = 0; i < n; i++){
        cout << tab[i] << endl;
    }

    delete[]tab;
    *wsk = NULL;

    return 0;
}
