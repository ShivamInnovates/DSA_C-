#include<iostream>
using namespace std;

int main()
{
    int arr[]= {1,2,4,7,7,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int lar = arr[0];
    int sec = arr[1];

    if(sec > lar){
        int temp = lar;
        lar = sec;
        sec = temp;
    }

    for(int i = 2; i<n; i++)
    {
        if(arr[i]>lar)
        {
            sec = lar;
            lar = arr[i];
        }
        else if(arr[i]>sec && arr[i]!=lar)
        {
            sec = arr[i];
        }
    }
     cout << "Largest element is: " << lar << "\n"<<"The Second Largest element is : "<<sec;
    return 0;

}