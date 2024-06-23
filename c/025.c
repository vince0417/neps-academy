//Fibonacci
#include <stdio.h>

int fibonacci(int num)
{
    if (num < 2) return 1;

    return fibonacci(num-1) + fibonacci(num-2);
}

int main()
{
    int num;
    scanf("%i", &num);

    printf("%i\n", fibonacci(num));
    return 0;
}
