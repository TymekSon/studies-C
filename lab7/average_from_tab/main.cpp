#include <iostream>
#include <cmath>

using namespace std;

int average(unsigned int n, int * tab){
    unsigned int sum = 0;
    for(int i = 0; i < n; i++){
        sum += tab[i];
        }
    return sum/n;
}

int main()
{
    unsigned int n = 12;
    int * tab = new int[n];
    int * wsk = &tab[0];

    for(int i = 0; i < n; i++){
        tab[i] = pow((i+1), 2);
    }

    cout << "Average: " << average(n, tab);

    delete[]tab;
    wsk = NULL;

    return 0;
}
