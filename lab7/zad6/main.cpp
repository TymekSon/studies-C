#include <iostream>
#include <stdlib.h>

using namespace std;

int* createTab(int n){
    int *tab = (int*)malloc(sizeof(int)*n);
    return *tab;
}

int main(){
    int tab = createTab(7);
    cout << &tab << endl;

    return 0;
}
