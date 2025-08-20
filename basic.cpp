#include<iostream>
using namespace std;

int main(){
//    string nm;
//     char ch;
//     cout<<"Enter the name: ";
//     cin>>nm;
//     cout<<"My name is "<<nm;

//     cout<<"Character accept : ";
//     cin>>ch;

//     if(ch>='A' && ch<='Z')
//     {
//         cout<<"Uppercase letter";
//     }
//     else if(ch>='a' && ch<='z')
//     {
//         cout<<"Lowercase letter";
//     }
//     else if(ch>='0' && ch<='9')
//     {
//         cout<<"Numeric";
//     }
//     else{
//         cout<<"Special characters";
//     }
    int num;
    int flag =0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i = 2 ; i<num; i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag == 0) 
        cout<<"Prime number";
    else 
        cout<<"Not Prime";
}