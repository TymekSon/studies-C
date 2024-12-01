#include <iostream>

using namespace std;

int main()
{
    int *wsk = new int;
    cout << "0: " << *wsk << endl;
    *wsk = 20;
    cout << "1: " << *wsk << endl;
    delete wsk; // zwalnia obszar w pamiêci, ale nie usuwa samego wskaŸnika
    cout << "2: " << *wsk << endl;
    //wsk = NULL;
    //cout << "3: " << *wsk << endl;

    int n = 0;
    cout << "How big should be the array?";
    cin >> n;

    int *tab = new int[n];

    for(int i = 0; i < n; i++){
        cout << "Insert value: ";
        cin >> tab[i];
    }

    for(int i = 0; i < n; i++){
        cout << tab[i];
    }

    delete [] tab;

    return 0;
}
