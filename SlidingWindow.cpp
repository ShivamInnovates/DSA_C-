#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {-1,2,3,3,4,5,-1};
    int sum =0, start =0, end =0, sum1;
    int n = size(arr);
    int k = 4;

    for(int i =0; i<=n-k; i++)
    {   sum1=0;
        for(int j = i; j<i+k; j++)
        {
            sum1 += arr[j];
            if(sum<=sum1)
            {
                sum = sum1;
                start = i;
                end = j;
            }
        }
    }

    for(int i = start ; i<=end; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n"<<sum;
    return 0;
}