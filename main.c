#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Három szám maximuma
    printf("Add meg az első számot:\n");
    int a;
    scanf("%d", &a);
    printf("Add meg a második számot:\n");
    int b;
    scanf("%d", &b);
    printf("Add meg a harmadik számot:\n");
    int c;
    scanf("%d", &c);
    int R;
    if(a>c){
        if(a>b){
            R=a;
        }
        else{
            R=b;
        }
    }
    else{
        if(b>c){
            R=b;
        }
        else{
            R=c;
        }
    }
    printf("A legnagyobb szám: %d", R);
    return 0;
}
