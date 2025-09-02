#include<iostream>
using namespace std;

int main()
{

    int arr[5] = {5,4,3,2,1};
    int n = size(arr);

    for(int i =0;i<=n-1;i++){
        for(int j = i; j>0 && arr[j-1]>arr[j]; j--){
            swap(arr[j-1], arr[j]);
        }
    }

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}