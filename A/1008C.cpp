#include<bits/stdc++.h>

using namespace std;

int maximal=0;

void printarray(int source[],int arr[], int size)
{
    int i,j;
    int cnt=0;
    for(i=0; i<size; i++)
    {
        if(source[i]<arr[i])cnt++;
       printf("%d ",arr[i]);

    }
    if(cnt>maximal)maximal=cnt;
   //cout<<"   "<<cnt<<endl;
    cout<<endl;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void permutation(int *source,int *arr, int start, int end)
{
    if(start==end)
    {
        printarray(source,arr, end+1);
        return;
    }
    int i;
    for(i=start;i<=end;i++)
    {
        //swapping numbers
        swap((arr+i), (arr+start));
        //fixing one first digit
        //and calling permutation on
        //the rest of the digits
        permutation(source,arr, start+1, end);
        swap((arr+i), (arr+start));
    }
}
int main()
{

    int size;
    //printf("Enter the size of array\n");
    scanf("%d",&size);
    int i;

    int arr[size];
    int arr2[size];

    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<size;i++)
    {
        arr2[i]=arr[i];     //copying array
    }


    //calling permutation function
    permutation(arr,arr2, 0, size-1);

    //cout<<maximal;
    return 0;
}
