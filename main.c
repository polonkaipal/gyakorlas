#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Két szám összeadása
    printf("Add meg az első számot:\n");
    int x;
    scanf("%d", &x);
    printf("Add meg a második számot:\n");
    int y;
    scanf("%d", &y);
    int s=x;
    while(y>0){
        s++;
        y--;
    }
    printf("A két szám összege: %d", s);
    return 0;
}
