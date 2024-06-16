//Bondinho
#include <stdio.h>

int main()
{
    int alunos, monitores;
    scanf("%i %i", &alunos, &monitores);

    int total = (alunos+monitores);
    if (total <= 50) printf("S\n");
    else printf("N\n");

    return 0;
}
