#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    int choice;

    printf("First number: ");
    scanf("%f", &a);
    printf("Second number: ");
    scanf("%f", &b);
    printf("Choose an operation:\n 1.+\n 2.-\n 3.*\n 4./\n");
    scanf("%d", &choice);
    switch(choice){
        case 1: printf("%f", a+b); break;
        case 2: printf("%f", a-b); break;
        case 3: printf("%f", a*b); break;
        case 4: printf("%f", a/b); break;
        default: printf("Wrong choice");
    }
    return 0;
}
