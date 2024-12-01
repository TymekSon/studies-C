#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3];
    int k = 0;
    int sum = 0;

    for(int i = 0; i < 3; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("%d", array[i]);
    }

    sum = 0;
    for(int i = 0; i < 3; i++){
        sum += array[i];
        printf("%d", array[i]);
    }
    printf("%d\n", sum);
    sum = 0;


    for(int i = 0; i < 3; i++){
        if(array[i] >= 0){
            sum += array[i];
        }
    }
    printf("%d\n", sum);
    sum = 0;


    for(int i = 0; i < 3; i++){
        if(array[i] < 0){
            sum += array[i];
        }
    }
    printf("%d\n", sum);
    sum = 0;


    printf("Podaj prog k: ");
    scanf("%d", &k);

    for(int i = 0; i < 3; i++){
        if(array[i] > k){
            sum += array[i];
        }
    }

    printf("%d\n", sum);
    sum = 0;


    for(int i = 0; i < 3; i++){
        if(array[i]/2 == 0){
            sum += array[i];
        }
    }

    printf("%d\n", sum);
    sum = 0;


    for(int i = 0; i < 3; i++){
        if(array[i]/2 != 0){
            sum += array[i];
        }
    }

    printf("%d\n", sum);
    sum = 0;
}
