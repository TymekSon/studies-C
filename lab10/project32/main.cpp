#include <iostream>

using namespace std;

char combine(char * wsk1, char * wsk2, char * wsk3){\
    int len = 0;
    int n = 0;

    while(*wsk1){
        wsk3[len] = * wsk1;
        wsk1++;
        len++;
    }
    while(*wsk2){
        wsk3[len] = * wsk2;
        wsk2++;
        len++;
    }
}

int main()
{
    unsigned int n = 20;
    unsigned int m = 20;

    char * const napis1 = new char[n];
    char * wsk1 = napis1;

    char * const napis2 = new char[m];
    char * wsk2 = napis2;

    char * const napis3 = new char[n+m];
    char * wsk3 = napis3;

    cin >> napis1;
    cin >> napis2;

    combine(wsk1, wsk2, wsk3);

    cout << napis3;

    return 0;
}
