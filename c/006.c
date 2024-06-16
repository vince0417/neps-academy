//Positivo, Negativo ou Nulo
#include <stdio.h>

int main()
{
    int num;
    scanf("%i", &num);

    if (num > 0) printf("positivo\n");
    else if (num == 0) printf("nulo\n");
    else printf("negativo\n");

    return 0;
}
