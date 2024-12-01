#include <iostream>

using namespace std;

int findTheLargest(int*tab, unsigned int n){
    int largest = tab[0];
    for(int i = 0; i < n-1; i++){
        if(tab[i+1] > tab[i]){
            largest = tab[i+1];
        }
    }
    return largest;
}

int main()
{
    unsigned int n = 10;
    int * tab = new int[n];

    //filling first tab (i*i+3)%7
    for(int i = 0; i < n; i++){
        tab[i] = ((i^2)+3)%7;
    }

    //printing the tab
    for(int i = 0; i < n; i++){
        cout << tab[i] << endl;
    }

    cout << "Largest number in an array: " << findTheLargest(tab, n) << endl;

    delete[]tab;

    return 0;
}
