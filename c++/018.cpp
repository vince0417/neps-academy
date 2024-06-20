//Potências Simples
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n1, n2;
    cin >> n1 >> n2;

    double resultado = pow(n1,n2);

    cout.precision(4);
    cout.setf(ios::fixed);
    cout << resultado << endl;
    return 0;
}
