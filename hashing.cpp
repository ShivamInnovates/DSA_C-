#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,1,4,1,2,1};
    int n = size(arr);

    map<int, int> mpp ;
    for(int i = 0 ; i<n ; i++)
    {
        mpp[arr[i]]+=1;
    }

    for(auto it : mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
}