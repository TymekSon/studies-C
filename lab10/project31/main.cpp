#include <iostream>

using namespace std;

int length(char * wsk){
    int len = 0;
    while(*wsk){
        wsk++;
        len++;
    }
    return len;
}

int main()
{
    char * const napis = new char[20];
    char * wsk = napis;

    for(int i = 0; i < 3; i++){
        wsk[i] = 'a';
    }

    cout << "Chain length: " <<length(wsk);

    delete[] napis;
    wsk = NULL;

    return 0;
}
