#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    int uneven_sum = 0;
    for(int i = 0; i < 10; i++){
        if(array[i]%2 != 0){
            uneven_sum += array[i];
        }
    }
    printf("Sum of uneven numbers in array: %d", uneven_sum);
    return 0;
}
