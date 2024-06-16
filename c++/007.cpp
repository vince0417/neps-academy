//Bondinho
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alunos, monitores;
    cin >> alunos >> monitores;

    int total = (alunos+monitores);
    if (total <= 50) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}
