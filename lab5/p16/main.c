#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10] = {2,5,3,8,6,9,12,13,21,4};
    int reverse_array[10];

    for(int i = 0; i < 10; i++){
        printf("%d  ", array[i]);
    }

    int j = 0;
    for(int i = 9; i >= 0; i--){
        reverse_array[j] = array[i];
        j ++;
    }

    for(int i = 0; i < 10; i++){
        printf("%d  ", reverse_array[i]);
    }

    return 0;
}
