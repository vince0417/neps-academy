//Raízes
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    cout.precision(4);
    cout.setf(ios::fixed);
    for (int i {}; i < num; i++)
    {
        double x;
        cin >> x;
        cout << sqrt(x) << endl;
    }
    
    return 0;
}
