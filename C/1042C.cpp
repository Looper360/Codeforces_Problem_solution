#include <bits/stdc++.h>
using namespace std;

bool one_neg=false;
int main()
{
    int n;
	cin>>n;
	vector<int>v;
	vector<int>::iterator it,it1;

	vector<pair<int,int> >zero,pos,neg;
    vector<pair<int,int> >::iterator itr;

	int cnt_zero=0;
	int cnt_pos=0;
	int cnt_neg=0;

	for(int i=0;i<n;i++)
    {
        long int a;
        cin>>a;
        v.push_back(a);

        if(a>0)
        {
            pos.push_back(make_pair(a,i));
            cnt_pos++;
        }
        if(a==0){
                 zero.push_back(make_pair(a,i));
                cnt_zero++;
        }
        if(a<0){
                neg.push_back(make_pair(a,i));
                cnt_neg++;
        }
    }
    sort(neg.begin(),neg.end());
    reverse(neg.begin(),neg.end());

    if((cnt_zero==n-1 && cnt_neg>0 && cnt_pos==0) || cnt_zero==n)
            {
                for(it=v.begin();it!=v.end()-1;it++)
                {
                    int index5,index6;


                        index5=(it-v.begin())+1;
                        index6=((it+1)-v.begin())+1;
                        cout<<"1 "<<index5<<" "<<index6<<endl;

                }

            }
    else if((cnt_zero>0 && cnt_pos>0 && cnt_neg>0) || (cnt_zero==0 && cnt_pos>0 && cnt_neg>0)|| (cnt_zero>0 && cnt_pos==0 && cnt_neg>0) || (cnt_zero>0 && cnt_pos>0 && cnt_neg==0))
        {

            if(cnt_zero==2)
             {
                 int index7,index8;
                 itr=zero.begin();
                 index7=(itr->second)+1;
                 itr++;
                 index8=(itr->second)+1;

                 cout<<"1 "<<index8<<" "<<index7<<endl;
             }
            if(cnt_neg%2 ==0)       //even
            {
                it=find(v.begin(),v.end(),0);       //2nd operation
                int index1=(it-v.begin())+1;

                cout<<"2 "<<index1<<endl;
                //v.erase(it);
/*
                cout<<"vector is: "<<endl;
                    for(it=v.begin();it!=v.end();it++)
                                cout<<(*it)<<" ";

                        cout<<endl;*/

            }
            else        //odd
            {
                    itr=neg.begin();
                    int value=(itr->first);
                    it=find(v.begin(),v.end(),value);

                    int index2=itr->second+1;
                    cout<<"2 "<<index2<<endl;
                    if(cnt_neg==1)one_neg=true;
                   // v.erase(it);        //removing from main vector
                    //neg.erase(itr);         //removing from neg vector
            }
            //multiplication
           if(!one_neg )
            {


            for(it=v.begin();it!=v.end()-1;it++)
            {
                int index3,index4;

                if((*it)!=0 )
                {
                     index3=(it-v.begin())+1;
                    it1=it+1;

                    if((*it1) !=0)
                    {
                        index4=((it1)-v.begin())+1;
                        cout<<"1 "<<index3<<" "<<index4<<endl;
                    }
                    else{
                        while((*it1)==0 && it1!=v.end()-1)
                            it1++;
                         if((*it1)!=0)
                         {
                                index4=((it1)-v.begin())+1;
                                cout<<"1 "<<index3<<" "<<index4<<endl;
                         }

                    }

                }

            }
           }


        }




}
