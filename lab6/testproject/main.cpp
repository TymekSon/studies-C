#include<iostream>
#include <iomanip>

using namespace std;

void fillArray(int m, int n){
    int array[m][n];
    for(int x = 0; x < m; x++){
        for(int y = 0; y < n; y++){
            array[x][y] = 0;
        }
    }
    for(int x = 0; x < m; x++){
        for(int y = 0; y < n; y++){
            cout << setw(5) << array[x][y];
        }
        cout << endl;
    }
}

int main(){
    int m, n;

    cout <<"Array m dimension: " << endl;
    cin >> m;
    cout << "Array n dimension: " << endl;
    cin >> n;

    fillArray(m, n);

    return 0;
}
