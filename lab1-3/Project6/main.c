#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    // 6 if method:
    /*
    int choice = 0;

    while(1){
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("4. Close\n");

        scanf("%d", &choice);

        if(choice == 1){
            printf("You chose option 1\n");
        }
        else if(choice == 2){
            printf("You chose option 2\n");
        }
        else if(choice == 3){
            printf("You chose option 3\n");
        }
        else if(choice == 4){
            break;
        }
        else{
            printf("Wrong choice/n");
        }
   }
    printf("Program closed\n");

    // 6 switch method


    int choice2 = 0;
    while(1){
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("4. Close\n");

        scanf("%d", &choice2);

        switch(choice2){
            case 1: printf("You chose option 1\n");
                break;
            case 2: printf("You chose option 2\n");
                break;
            case 3: printf("You chose option 3\n");
                break;
            case 4: printf("Closing...\n");
                goto exit;
            default: printf("Wrong choice\n");
                break;
        }
    }
    exit: ;
    */

    // 7
    for(int x = 1; x < 10; x++){
        for(int y = 1; y < 10; y++){
            printf("%d", x*y);
        }
        printf("\n");
    }

    return 0;
}
