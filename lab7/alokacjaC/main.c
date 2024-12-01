#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *wsk = (int*)malloc(sizeof(int));

    if(wsk == NULL){
        printf("Przydzielenie pamieci nie powiodlo sie. \n");
        return 1;
    }

    *wsk = 20;
    printf("1: %d\n", *wsk);
    return 0;
}
