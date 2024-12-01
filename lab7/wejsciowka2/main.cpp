#include <iostream>

using namespace std;

int swapper(int * wsk1, int * wsk2){
    int temp;
    if(*wsk2 < *wsk1){
        temp = *wsk1;
        *wsk1 = *wsk2;
        *wsk2 = temp;
    }
}

int main()
{
    int a = 12;
    int b = 9;

    int *wsk1 = &a;
    int *wsk2 = &b;

    cout <<"Starting values: " <<endl;
    cout <<"First: "<<*wsk1<<" Second: "<<*wsk2<<endl;

    swapper(wsk1, wsk2);

    cout <<"Swapped values: " <<endl;
    cout <<"First: "<<*wsk1<<" Second: "<<*wsk2<<endl;


    return 0;
}
