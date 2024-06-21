//Zerinho ou Um
#include <stdio.h>

int main()
{
    int alice, beto, clara;
    scanf("%i %i %i", &alice, &beto, &clara);

    if (alice != beto && alice != clara) printf("A\n");
    else if (beto != alice && beto != clara) printf("B\n");
    else if (clara != alice && clara != beto) printf("C\n");
    else printf("*\n");
    return 0;
}
