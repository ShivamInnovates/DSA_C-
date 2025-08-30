#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int tar)
{
    int mid = s + (e-s)/2;
    if(s<e)
    {
        if(arr[mid] == tar)
        {
            return mid;
        }

        if(arr[mid]<=tar)
        {
            return binarySearch(arr, mid+1, e, tar);
        }

        if(arr[mid]>=tar)
        {
            return binarySearch(arr, s, mid-1, tar);
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int tar = 4; // 1 and 4 is giving wrong answer as -1
    int s = 0, e = size(arr)-1;
    int mid = s + ((e-s)/2);
    int ans = binarySearch(arr, s, e, tar);
    cout<<"Element found at index: "<<ans<<endl;
    

    return 0;
}