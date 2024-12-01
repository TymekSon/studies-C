#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first;
    int last;

    printf("First value: ");
    scanf("%d", &first);

    printf("First value: ");
    scanf("%d", &last);

    int spread = first - last;

    int array[spread];

    for(int i = 0; i < spread; i++){
        array[i] = first+i;
    }

    for(int i = 0; i < spread; i++){
        if(array[i]%2 == 0){

        }
    }

    return 0;
}
