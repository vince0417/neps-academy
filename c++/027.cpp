//Quadrante
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 > 0 and n2 > 0) cout << "Q1\n";
    else if (n1 < 0 and n2 > 0) cout << "Q2\n";
    else if (n1 < 0 and n2 < 0) cout << "Q3\n";
    else if (n1 > 0 and n2 < 0) cout << "Q4\n";
    else cout << "eixos\n";

    return 0;
}
