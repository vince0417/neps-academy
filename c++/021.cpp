//Zerinho ou Um
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alice, beto, clara;
    cin >> alice >> beto >> clara;

    if (alice != beto and alice != clara) cout << "A\n";
    else if (beto != alice and beto != clara) cout << "B\n";
    else if (clara != alice and clara != beto) cout << "C\n";
    else cout << "*" << endl;
    return 0;
}
