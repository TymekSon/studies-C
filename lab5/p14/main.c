#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int number;
    int prev_number;
    int sum = 0;
    int negative_sum = 0;
    bool same_numbers = false;
    printf("Insert numbers: ");
    do{
        scanf("%d", &number);
        if(number < 0){
            negative_sum ++;
        }
        if(number == prev_number){
            same_numbers = true;
        }
        prev_number = number;
        sum += number;
    }while(sum < 100 && negative_sum <= 10 && same_numbers == false);

    printf("%d", sum);

    return 0;
}
