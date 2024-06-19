//Aprovado ou Reprovado
#include <stdio.h>

int main()
{
    float n1, n2;
    scanf("%f %f", &n1, &n2);

    float media = (n1+n2)/2;

    if (media >= 7.0) printf("Aprovado\n"); 
    else if (media >= 4.0 && media < 7) printf("Recuperacao\n");
    else printf("Reprovado\n");
    return 0;
}
