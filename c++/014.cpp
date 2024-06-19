//Lâmpadas
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int a {0}, b {0};
    for (int i {}; i < num; i++)
    {
        int acao;
        cin >> acao;

        if(acao == 1)
        {
            if (a == 0) a = 1;
            else a = 0;
        }
        if (acao == 2)
        {
            if (a == 0) a = 1;
            else a = 0;

            if (b == 0) b = 1;
            else b = 0;
        }

    }
    
    cout << a << endl << b << endl;
    return 0;
}
