#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,1,4,1,2,1};
    int n = size(arr);

    int hash[5] = {0};
    for(int i = 0 ; i<n ; i++)
    {
        hash[arr[i]]+=1;
    }

    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Count of "<<num<<" : "<<hash[num];
}