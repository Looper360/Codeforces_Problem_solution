#include<bits/stdc++.h>

using namespace std ;

int main()
{
    char str[100],ch;
    char arr[100];
    int i,ln,j=-1,count;
    vector<char>vec;

    //printf("Enter the string: ");
    gets(str);
    ln=strlen(str);

     for(ch='a';ch<='z';ch++){

            count=0;

        for(i=0;i<ln;i++)
        {

        if(ch==str[i])
            {
            count++;

        }

        }
        if(count>0){

             vec.push_back(ch);
            }
    }

/*
    for(j=0;j<vec.size();j++)
       cout<<vec[j]<<"\n";  */
   // cout<<vec.size()<<"\n";
    if(vec.size()%2==0)printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");

}

