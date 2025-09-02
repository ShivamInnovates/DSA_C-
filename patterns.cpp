#include <iostream>
using namespace std;

int main() {
    // for(int i =0; i<4; i++)
    // {
    //     for (int j = 0; j<4; j++)
    //     {
    //         cout<<"*    ";
    //     }
    //     cout<<"\n";
    // }

    // for( int i = 1; i<4; i++)
    // {
    //     for ( int j = 0; j<3; j++)
    //     {
    //         cout<<i<<"      ";
    //     }
    //     cout<<"\n";
    // }

    // for (int i =1; i<5; i++)
    // {
    //     for(int j =0; j<i; j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<"\n";
    // }

    for (int i =4; i>0; i--)
    {
        for(int j =0; j<i; j++)
        {
            cout<<" ";
        }

        for (int k=5;k>i;k--)
            {
                cout<<"*";
            }
        
        cout<<"\n";
        
    }
    
    

    return 0;
}