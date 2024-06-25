//Quadrante
#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%i %i", &n1, &n2);

    if (n1 > 0 && n2 > 0) printf("Q1\n");
    else if (n1 < 0 && n2 > 0) printf("Q2\n");
    else if (n1 < 0 && n2 < 0) printf("Q3\n");
    else if (n1 > 0 && n2 < 0) printf("Q4\n");
    else printf("eixos\n");

    return 0;
}
