#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Szökőév meghatározása
    printf("Add meg az évszámot:\n");
    int ev;
    scanf("%d", &ev);
    if(ev%4==0){
        if(ev%100==0){
            if(ev%400==0){
                printf("Szökőév");
            }
            else{
                printf("Nem szökőév");
            }
        }
        else{
            printf("Szökőév");
        }
    }
    else{
        printf("Nem szökőév");
    }
    return 0;
}
