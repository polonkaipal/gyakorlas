#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Hatványozás (alap és a kitevő pozitív egész szám)
    printf("Add meg a hatvány alapot (pozitív egész szám):\n");
    int alap;
    scanf("%d", &alap);
    printf("Add meg a hatvány kitevőt (pozitív egész szám):\n");
    int kitevo;
    scanf("%d", &kitevo);
    int szorzat=alap;
    while(kitevo>1){
        szorzat*=alap;
        kitevo--;
    }
    printf("A keresett hatvány: %d", szorzat);
    return 0;
}
