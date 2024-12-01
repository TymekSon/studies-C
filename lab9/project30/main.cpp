#include <iostream>

using namespace std;

int notZero(int*tab, unsigned int n){

    int notzero = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] != 0){
            notzero ++;
        }
    }

    int * tab2 = new int[notzero];

    for(int i = 0; i < notzero; i++){
        if(tab[i] != 0){
            notzero ++;
        }
    }
}

int main()
{
    unsigned int n = 10;
    int * tab = new int[n];

    //filling first tab (i*i+3)%7
    for(int i = 0; i < n; i++){
        tab[i] = ((i^2)+3)%5;
    }

    for(int i = 0; i < n; i++){
        cout << tab[i] << endl;
    }

    return 0;
}
