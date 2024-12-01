#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

class Array2D{
    public:
        int m;
        int n;


    void create(){
        srand(static_cast<unsigned int>(time(nullptr)));
        int newArray[m][n];
        for(int x = 0; x < m; x++){
            for(int y = 0; y < n; y++){
                newArray[x][y] = rand() % 100;
            }
        }
    }

    void print(){
        for(int x = 0; x < m; x++){
            for(int y = 0; y < n; y++){
                cout << setw(3) << newArray[x][y];
            }
            cout << endl;
        }
    }
};

int main()
{
    Array2D newArray;
    newArray.m = 4;
    newArray.n = 4;

    newArray.create();
    newArray.print();



    return 0;
}
