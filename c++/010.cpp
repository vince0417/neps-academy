//Aprovado ou Reprovado
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n1 {}, n2 {};
    cin >> n1 >> n2;

    float media = (n1+n2)/2;

    if (media >= 7.0) cout << "Aprovado\n";
    else if (media >= 4.0 and media < 7) cout << "Recuperacao\n";
    else cout << "Reprovado\n";
    return 0;
}
