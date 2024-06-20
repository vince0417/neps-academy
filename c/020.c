//Raízes
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        double x;
        scanf("%lf", &x);
        printf("%.4lf\n", sqrt(x));
    }
    
    return 0;
}
