//Código (OBI 2015)
#include <stdio.h>

int main()
{
    int num;
    scanf("%i", &num);
    int vetor[num]; 

    for (int i = 0; i < num; i++)
    {
        int n;
        scanf("%i", &n);
        vetor[i] = n;
    }

    int soma  = 0;
    for (int i = 0; i < num-2; i++)
    {
        if (vetor[i] == 1 && 
            vetor[i+1] == 0 &&
            vetor[i+2] == 0) soma ++;
    }
    
    printf("%d\n", soma);
    return 0;
}
