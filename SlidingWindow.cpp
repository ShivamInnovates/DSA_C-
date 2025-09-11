#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,5,1,10,10};
    int sum =0, maxLength = 0,r =0, l=0, start =0, end =0;
    int n = size(arr);
    int k = 14;

    while(r<n)
    {
        sum+= arr[r];

        while(sum > k && l<=r)
        {
            sum-= arr[l];
            l++;
        }

        if(maxLength<r-l+1)
        {
            maxLength = r-l+1;
            start = l;
            end = r;
        }
        r++;
        
    }

    for(int i = start; i<=end; i++)
        cout<<arr[i]<<" ";
    cout<<"\nLength of the subarray: "<<maxLength;
    
    return 0;
}