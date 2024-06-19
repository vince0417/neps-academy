//Lâmpadas
#include <stdio.h>

int main()
{
    int num;
    scanf("%i", &num);

    int a = 0, b = 0;
    for (int i = 0; i < num; i++)
    {
        int acao;
        scanf("%i", &acao);

        if(acao == 1)
        {
            if (a == 0) a = 1;
            else a = 0;
        }
        if (acao == 2)
        {
            if (a == 0) a = 1;
            else a = 0;

            if (b == 0) b = 1;
            else b = 0;
        }

    }
    
    printf("%i\n%i\n", a, b);
    return 0;
}
