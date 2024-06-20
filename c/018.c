//Potências Simples
#include <stdio.h>

int main()
{
    double n1, n2;
    scanf("%lf %lf", &n1, &n2);

    double resultado = pow(n1,n2);

    printf("%.4lf\n", resultado);
    return 0;
}
