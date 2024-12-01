#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    char choice;

    for(int i = 0; i < 10; i++){
        printf("Podaj wartosc: ");
        scanf("%d", &array[i]);
        printf("Czy to koniec wprowadzania? (t/n)");
        scanf("%s", &choice);
        if(choice == 't'){
            break;
        }
    }

    for(int i = 0; i < (sizeof array / sizeof *array); i++){
        if(array[i] >= 0 && array[i] <= 10){
            array[i] = array[i] + 1;
        }
        else{
            array[i] += 5;
        }
    }

    for(int i = 0; i < (sizeof array / sizeof *array); i++){
        printf("%d \n", array[i]);
    }

    return 0;
}
