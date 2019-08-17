#include <bits/stdc++.h>

using namespace std;

vector<int> decToBinary(int n)
{
    vector<int> binaryNum;
    while (n > 0) {
        binaryNum.push_back( n % 2) ;
        n = n / 2;
    }
     reverse(binaryNum.begin(),binaryNum.end());

     return binaryNum;
    // for(int i=0;i<binaryNum.size();i++)
           //     cout << binaryNum[i]<<" ";
}

// driver code
int main()
{
    int n = 10;

    vector<int>binary;
    binary=decToBinary(n);


}

