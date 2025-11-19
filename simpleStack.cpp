#include<iostream>
using namespace std;
#define MAX 100

class StackImplementation
{
    int st[MAX];
    int top= -1;

    public:
        bool isFull()
        {
            return top == MAX-1;
        }

        bool isEmpty()
        {
            return top == -1;
        }

        void push(int n)
        {
            if(isFull())
            {
                cout<<"Stack is full"<<endl;
            }
            else{
                top++;
                st[top] = n;
            }
        }

        void pop()
        {
            if(isEmpty())
            {
                cout<<"Stack is empty"<<endl;
            }
            else{
                int x = st[top];
                top--;
            }
        }

        void peek()
        {
            if(isEmpty())
            {
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Top element : "<<st[top]<<endl;
            }
        }

        void display()
        {
            if(isEmpty())
            {
                cout<<"Stack is empty"<<endl;
            }
            else{
                for(int i =top; i>=0; i--)
                {
                    cout<<st[i]<<"\n";
                }
            }
        }

        int size()
        {
            return top+1;
        }
};



int main()
{
    StackImplementation s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    s.peek();
    s.display();
    cout<<"Size of the stack : "<<s.size()<<endl;
    return 0;

}
