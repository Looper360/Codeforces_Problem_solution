#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, k,m;
    cin >> n >> k;

    if (k <= (n + 1) / 2)
    {
        m=k * 2 - 1;
        cout << m << endl;
    }
    else
    {
        m=(k - (n + 1) / 2) * 2 ;
        cout << m<< endl;
    }
    return 0;
}
