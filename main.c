#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Előjel függvény
    printf("Adj meg egy számot\n");
    int szam;
    scanf("%d", &szam);
    if(szam<0){
        printf("-1");
    }
    else if(szam==0){
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;
}
