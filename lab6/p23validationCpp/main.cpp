#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Insert an Integer: ";

    while(!(cin >> number)){
        cout << "Insert an Integer ";
        cin.clear();
        cin.ignore(600, '\n');
    }

    return 0;
}
