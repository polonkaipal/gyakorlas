#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Elsőfokú egyenlet megoldása
    printf("Add meg az 'a' értékét:\n");
    int a;
    scanf("%d", &a);
    printf("Add meg a 'b' értékét:\n");
    int b;
    scanf("%d", &b);
    printf("Az elsőfokú egyenlet megoldása: %f", (float)-b/a);
    return 0;
}
