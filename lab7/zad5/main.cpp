#include <iostream>
#include <stdlib.h>

using namespace std;

int reserve(){
    int *number = (int*)malloc(sizeof(int));
    return *number;
}

int main(){
    cout << reserve();
    return 0;
}
