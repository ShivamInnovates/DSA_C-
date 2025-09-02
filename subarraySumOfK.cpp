#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,1,8};
    int n = size(arr);
    int k = 6, len =0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum =0;
            for(int m = i; m<=j; m++){
                sum+=arr[m];
            }
            if(sum == k){
                 len = min(len, j-i+1);
               
        }
    }
}
 cout<<len;
    return 0;
}