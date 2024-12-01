#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real_numbers[5];
    int lower_than_0 = 0;

    for(int i = 0; i < 5; i++){
        scanf("%f", &real_numbers[i]);
    }

    for(int i = 0; i < 5; i++){
        if(real_numbers[i] < 0){
            lower_than_0 ++;
        }
    }
    printf("Lower than 0: %d\n", lower_than_0);

    for(int i = 0; i < 5; i++){
        printf("%f  ", real_numbers[i]);
    }

    for(int i = 4; i >= 0; i--){
        printf("%f  ", real_numbers[i]);
    }

    return 0;
}
