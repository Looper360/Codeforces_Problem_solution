#include<bits/stdc++.h>

using namespace std ;
int main()
{
    int n,i,room=0,cap,total ;
    cin>>n ;

    for(i=0;i<n;i++){
        cin>>cap>>total ;

        if(total-cap>=2) room++ ;

    }

    cout<<room ;

}
