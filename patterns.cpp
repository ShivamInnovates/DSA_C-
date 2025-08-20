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

    int a = 4;
    while(a > 0){
        int b = 4;
        while (b > 0){
            cout <<"* ";
            b--;
        }
        a--;
        cout<<"\n";
    }

    return 0;
}