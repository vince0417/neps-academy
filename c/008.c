//Par ou Ímpar
#include <stdio.h>

int main()
{
    int bino, cino;
    scanf("%i %i", &bino, &cino);

    int resultado = (bino+cino);
    if (resultado%2 == 0) printf("Bino\n");
    else printf("Cino\n");

    return 0;
}
