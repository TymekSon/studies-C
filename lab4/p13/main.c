#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char days[7][10] = {{"Monday"},{"Tuesday"},{"Wednesday"},{"Thirsday"},{"Friday"},{"Saturday"},{"Sunday"},};

    printf("Insert a number, I will tell you what day it is. \n");
    scanf("%d", &number);
    if(number > 0 && number <= 7){
        printf("%d. day is %s", number, days[number-1]);
    }
    else{
        printf("There is no %d. day...", number);
    }

    return 0;
}
