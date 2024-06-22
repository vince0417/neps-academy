//Vestibular
#include <stdio.h>
#include <string.h>

int main()
{
    int num, nota = 0;
    char gab[80], prova[80];
    scanf("%i", &num);
    scanf("%s %s", gab, prova);

    for (int i = 0; i < num; i++)
    {
        if (gab[i] == prova[i]) nota++;
    }
    
    printf("%d\n", nota);
    return 0;
}
