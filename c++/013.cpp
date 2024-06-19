//Prêmio do Milhão
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, soma {}, dias {};
    cin >> num;

    for (int i {}; i < num; i++)
    {
        int views;
        cin >> views;

        if (soma < 1000000) dias++;
        soma += views;
    }
    
    cout << dias << endl;
    return 0;
}
