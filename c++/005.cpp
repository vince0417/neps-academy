//Flíper
#include <bits/stdc++.h>
using namespace std;

int main() {
    int p1, p2;
    cin >> p1 >> p2;
    
    if (p1 == 0)
    {
        cout << "C\n";
    }
    else if (p1 == 1 and p2 == 0)
    {
        cout << "B\n";
    }
    else{
        cout << "A\n";
    }
    
    return 0;
}
