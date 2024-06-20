//Garçom
#include <stdio.h>

int main()
{
    int num, soma = 0;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        int n1, n2;
        scanf("%i %i", &n1, &n2);

        if (n1 > n2) soma += n2;
    }
    
    printf("%i\n", soma);
    return 0;
}
