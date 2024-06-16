//Par ou Ímpar
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bino, cino;
    cin >> bino >> cino;

    int resultado = (bino+cino);
    if (resultado%2 == 0) cout << "Bino" << endl;
    else cout << "Cino" << endl;

    return 0;
}
