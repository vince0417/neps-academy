//Prêmio do Milhão
#include <stdio.h>

int main()
{
    int num, soma = 0, dias = 0;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        int views;
        scanf("%i", &views);

        if (soma < 1000000) dias++;
        soma += views;
    }
    
    printf("%i\n", dias);
    return 0;
}
