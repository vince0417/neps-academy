//Vestibular
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, aux {};
    string gab {}, prova {};
    cin >> num;
    cin >> gab >> prova;

    for (int i {}; i < num; i++)
    {
        if (gab.at(i) == prova.at(i)) aux++;
    }
    
    cout << aux << endl;
    return 0;
}
