#include<iostream>
using namespace std;

int main()
{
    int arr[]= {1,2,4,7,7,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int largest= INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    int secondLargest= INT_MIN;
    for (int i =0; i<n; i++)
    {
        if(arr[i] >secondLargest && arr[i] != largest)
        {
            secondLargest= arr[i];
        }
    }
     cout << "Largest element is: " << largest << "\n"<<"The Second Largest element is :"<<secondLargest;
    return 0;

}