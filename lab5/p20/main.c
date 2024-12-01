#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int tab[5][4];

    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 4; y++){
            int r = rand() % 100;
            tab[x][y] = r;
        }
    }

     for(int x = 0; x < 5; x++){
        for(int y = 0; y < 4; y++){
            printf("%-4d",tab[x][y]);
        }
        printf("\n");
    }

    printf("\n");

    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 4; y++){
            if(tab[x][y] > tab[0][0]){
            tab[0][0] = tab[x][y];
            }
        }
    }
    int max = tab[0][0];
    printf("Max: %d \n\n", max);

    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 4; y++){
            if(tab[x][y] < tab[0][0]){
            tab[0][0] = tab[x][y];
            }
        }
    }
    int min = tab[0][0];
    printf("Min: %d \n\n", min);

    printf("Spread: %d \n", (max - min));

    return 0;
}
