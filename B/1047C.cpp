#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int starting,int arr[], int n)
{
    int result = arr[starting];
    for (int i = starting+1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}
int main()
{
    int n;

    int GCD;


    vector<int>gcd_vec,deleted_num;
    vector<int>::iterator it1,it2;

    cin>>n;
    int arr[n+1];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int starting;

    int MAX=0;

    for(starting=0;starting<n; starting++){

         GCD=findGCD(starting,arr, n);
         gcd_vec.push_back(GCD);
         deleted_num.push_back(arr[starting]);


    }
    /* for(it2=gcd_vec.begin();it2!=gcd_vec.end();it2++)
       {
           cout<<(*it2)<<" ";
       }
       cout<<endl;
*/
    int j=-1;
    for(it1=gcd_vec.begin();it1!=gcd_vec.end();it1++)
       {

           MAX=max(MAX,deleted_num[++j]);
           if((*it1)>MAX)break;
       }
    cout<<--j<<endl;
    //else cout<<"-1"<<endl;



}
