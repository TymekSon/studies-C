#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];

    printf("Fill an array: \n");

    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 1; i < 10; i++){
        if(array[i] > array[0]){
            array[0] = array[i];
        }
    }
    int max = array[0];

    for(int i = 1; i < 10; i++){
        if(array[i] < array[0]){
            array[0] = array[i];
        }
    }
    int min = array[0];

    printf("Spread: %d", (max - min));

    return 0;
}
