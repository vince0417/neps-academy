//Área da Circunferência
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int raio;
    const double pi = 3.1416;
    cin >> raio;

    int aux = pow(raio,2);
    double area = pi * aux;

    cout.precision(2);
    cout.setf(ios::fixed);
    cout << area << endl;
    return 0;
}
