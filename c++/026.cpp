//Consecutivos
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int vetor[num];
    for (int i {}; i < num; i++)
    {
        cin >> vetor[i];
    }
    
    int maior {}, soma {1};
    for (int i {1}; i < num; i++)
    {
        if (vetor[i] == vetor[i-1]) soma++;
        else soma = 1;

        if (soma > maior) maior = soma;
    }
    
    cout << maior << endl;
    return 0;
}
