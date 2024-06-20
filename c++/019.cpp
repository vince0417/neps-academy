//Código (OBI 2015)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> vetor(num); 

    for (int i {}; i < num; i++)
    {
        int n;
        cin >> n;
        vetor.at(i) = n;
    }

    int soma {};
    for (int i {}; i < num-2; i++)
    {
        if (vetor.at(i) == 1 and 
            vetor.at(i+1) == 0 and
            vetor.at(i+2) == 0) soma ++;
    }
    
    cout << soma << endl;
    return 0;
}
