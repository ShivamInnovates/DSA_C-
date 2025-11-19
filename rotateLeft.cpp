#include<iostream>
using namespace std;

int main()
{
    int arr[]= {1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k = 8;
    k = k % n;  // handle k > n

    int temp[k];

    // Step 1: Store first k elements
    for(int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Step 2: Shift rest to front
    for(int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Step 3: Copy temp elements to end
    for(int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }

    // Print result
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

