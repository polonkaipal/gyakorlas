#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Faktoriális
    printf("Adj meg egy pozitív egész számot:\n");
    int szam;
    scanf("%d", &szam);
    int seged=1;
    while(szam>1){
        seged*=szam--;
    }
    printf("A szám faktoriálisa: %d", seged);
    return 0;
}
