#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,1,8};
    int n = size(arr);
    int k = 7, len =0, current =0;
    int sum;
 
    for(int i=0;i<n;i++){
        current = i;
        sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[current];
            if(sum == k){
                 len = max(len, j-i+1);    
        }
        current++;
    }
}
 cout<<len;
    return 0;
}