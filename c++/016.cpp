//Garçom
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, soma {};
    cin >> num;

    for (int i {}; i < num; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;

        if (n1 > n2) soma += n2;
    }
    
    cout << soma << endl;
    return 0;
}
