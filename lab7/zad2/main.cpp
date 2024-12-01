#include <iostream>

using namespace std;

int *f1(int * w1, int * w2){
    if(*w1 <= *w2){
        return w1;
    }
    else{
        return w2;
    }
}

int main()
{
    int a = 12;
    int b = 13;
    int * wsk1 = &a;
    int * wsk2 = &b;

    cout << f1(wsk1, wsk2);

    wsk1 = NULL;
    wsk2 = NULL;

    return 0;
}
