#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i =0;
    for (int j = 1 ; j<n ; j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"The size of the array after removing duplicates is: "<<i+1<<endl;
}