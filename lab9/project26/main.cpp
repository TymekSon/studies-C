#include <iostream>

using namespace std;

//function writing first tab values to second tab
int write(int*tab1, int*tab2, unsigned int n){
    for(int i = 0; i < n; i++){
        tab2[i] = tab1[i];
    }
}

int main()
{
    //defining tabs and their length
    unsigned int n = 10;
    int * tab1 = new int[n];
    int * tab2 = new int[n];

    //filling first tab
    for(int i = 0; i < n; i++){
        tab1[i] = i+1;
    }

    //printing first tab
    for(int i = 0; i < n; i++){
        cout << tab1[i] << endl;
    }

    //writing first tab values to second tab
    write(tab1, tab2, n);

    //checking second tab
    for(int i = 0; i < n; i++){
        cout << tab1[i] << endl;
    }

    return 0;
}
