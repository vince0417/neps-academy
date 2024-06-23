//Área da Circunferência
#include <stdio.h>
#include <math.h>

int main()
{
    int raio;
    const double pi = 3.1416;
    scanf("%i", &raio);

    int aux = pow(raio,2);
    double area = pi * aux;

    printf("%.2lf\n", area);
    return 0;
}
