#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[(low + high) / 2];
    int i = low;
    int j = high;

    while(i<j)
    {
        while(arr[i]<=pivot && i<=high) i++;

        while(arr[j]>pivot && j>=low) j--;

        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int part = partition(arr, low, high);
        quickSort(arr, low, part-1);
        quickSort(arr, part+1, high);
    }
}
int main()
{
    int arr[] = {64,25,12,22,11};
    int n = size(arr);
    int low =0, high =n-1;
    quickSort(arr, low, high);
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}