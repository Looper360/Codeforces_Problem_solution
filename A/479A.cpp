#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int d[10],a,b,c,i;


    cin>>a>>b>>c;

    d[0]= a+b*c;
    d[1]= a*(b+c);
    d[2]= a*b*c;
    d[3]=(a+b)*c;
    d[4]= a+b+c;

    //finding the greatest value of result


 cout << " max element is: " << *max_element(d.begin() , d.end()) << endl;
 cout << " min element is: " << *min_element(d.begin() , d.end()) << endl;

    for (i = 0; i < 5; i++)
        cout << d[i] << " ";


}
