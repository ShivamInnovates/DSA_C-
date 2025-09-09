#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {2,5,1,10,10};
    int sum , max = 0,max1,start,end;
    int n = size(arr);
    int k = 14;

    for(int i =0; i<=n-1; i++)
    {
        sum =0;
        for(int j =i ; j<=n-1; j++)
        {
            sum+=arr[j];
            max1=j-i+1; 
            if(sum<=k && max1>max) 
            {
                max =max1;
                start = i;
                end = j;
            }
        }

    }
    cout<<max<<"\n";
    for(int i = start ; i<=end ; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}