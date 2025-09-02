#include<iostream>
using namespace std;

int main()
{

    int arr[5] = {64, 25, 12, 22, 11};
    int n = size(arr);
    for(int i =0; i<=n-1; i++)
    {
        int min = i;
        for (int j = i+1; j<=n-1; j++)
        {
            if(arr[j]<arr[min])
            {
                min =j;
            }
        }
      
        swap(arr[min], arr[i]);
        
    }

    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}