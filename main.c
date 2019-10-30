#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Prímtényezőkre bontás
    printf("Adj meg egy pozitív egész számot:\n");
    int x;
    scanf("%d", &x);
    int y=2;
    while(y<=x){
        if(x%y==0){
            printf("%d\n", y);
            x=x/y;
        }
        else{
            y++;
        }
    }
    return 0;
}
