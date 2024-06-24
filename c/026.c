//Consecutivos
#include <stdio.h>

int main()
{
    int num;
    scanf("%i", &num);

    int vetor[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%i", &vetor[i]);
    }
    
    int maior = 0, soma = 1;
    for (int i = 1; i < num; i++)
    {
        if (vetor[i] == vetor[i-1]) soma++;
        else soma = 1;

        if (soma > maior) maior = soma;
    }
    
    printf("%i\n", maior);
    return 0;
}
