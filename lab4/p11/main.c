#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tab1[4][3] = {{2.1, 4.5, 2.2},{5, 6, 8.9},{2.6, 4.9, 3.4},{6.6, 7.7, 4.3}};

    float tab2[4][3];

    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 3; y++){
            scanf("%f", &tab2[x][y]);
        }
    }

    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 3; y++){
            printf("%f  ", tab2[x][y]);
        }
        printf("\n");
    }

    return 0;
}
