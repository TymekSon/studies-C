#include <iostream>

using namespace std;

int main()
{
    int rows = 6, columns = 5;
    int number = 1;
    int sum = 0;
    int start, stop;

    int tab[columns][rows];

    for(int x = 0; x < rows; x++){
        for(int y = 0; y < columns; y++){
            tab[x][y] = number;
            number += 2;
        }
    }

    for(int x = 0; x < rows; x++){
        for(int y = 0; y < columns; y++){
            sum += tab[x][y];
        }
    }
    cout<<"Suma elementow tabeli: "<<sum<<endl;
    cout<<endl;

    for(int x = 0; x < rows; x++){
        for(int y = 0; y < columns; y++){
            cout<<tab[x][y]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
