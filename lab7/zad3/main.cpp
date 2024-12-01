#include <iostream>

using namespace std;

int swapper(int*w1, int*w2){
    int temp;
    tepm = *w1;
    *w1 = *w2;
    *w2 = temp;
}

int main()
{
    int a = 23;
    int b = 34;
    int * wsk1 = &a;
    int * wsk2 = &b;

    swapper(wsk1, wsk2);
    cout << *wsk1 << "   " << *wsk2;

    return 0;
}
