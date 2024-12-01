#include <iostream>

using namespace std;

int main()
{
    // 1
    /*
    float a, b;
    cout << "Set two values: " << endl;
    cin >> a;
    cin >> b;

    if(a > b){
        cout << a << " is bigger" << endl;
    }
    else if(a == b){
        cout << "values are equal" << endl;
    }
    else{
        cout << b << " is bigger" << endl;
    }
    */


    // 2
    /*
    for(int i = 1; i <= 10; i++){
        cout << i << endl;
    }
    */


    // 3
    /*
    for(int i = 10; i > 0; i--){
        cout << i << endl;
    }
    */


    // 4a
    /*
    int i = 1;
    while(i <= 10){
        cout << i << endl;
        i ++;
    }
    */


    // 4b
    /*
    int i = 1;
    do{
       cout << i << endl;
       i++;
    }while(i <= 10);
    */


    // 5
    int value;
    cout << "Insert an int value: " << endl;
    cin >> value;

    if(value%2 == 0){
        cout << value << " is even" << endl;
    }
    else{
        cout << value << " is uneven" << endl;
    }
    return 0;
}
