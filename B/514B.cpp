#include<bits/stdc++.h>

using namespace std ;
double infinity=2/0.0;
double negative_inf=-(2/0.0);

int n,Count=0;
set<double>s;
set<double>::iterator it;

void sameline(double sum[10000][2])
{
    double slope[n+1];
    int i,j;

    for( i=1,j=0;i<=n;j++,i++)
        {

                slope[j] = ((sum[i][1] - sum[0][1])) / ((sum[i][0] - sum[0][0]));       // m=(y1-y0)/(x1-x0)

    }


    //slope[j]=2/0.0;
     for(j=0;j<n;j++)
     {
         if(slope[j] == negative_inf)
         {
             s.insert(fabs(slope[j]));

         }
         else
            s.insert(slope[j]);
         //cout<<slope[j]<<" ";
     }

     //cout<<"\n";
}

int main()
{

    cin>>n;
    double points[n+1][2];

    for(int i=0;i<=n;i++)
    {
        cin>>points[i][0];  // x coordinate
        cin>>points[i][1];  //y coordinate
    }
    sameline(points);

    for(it=s.begin();it!=s.end();it++){
            //cout<<(*it)<<" ";
            Count++;
    }
    cout<<Count;


}
