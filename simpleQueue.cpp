#include<iostream>
using namespace std;
#define MAX 100

class queueImplementation{
    int q[MAX];
    int front = -1, rear = -1, curr = 0;

    public:
    void push(int n)
    {
        if(curr == 0)
        {
            front = 0;
            rear = 0;
            q[rear] = n;
            curr++;
        }
        else if(curr == MAX-1)
        {
            cout<<"Queue is full "<<endl;
        }
        else{
            q[rear] = n;
            rear = (rear + 1) % MAX;
            curr++;
        }
    }

    void pop()
    {
        if(curr == 0)
        {
            cout<<"Queue is empty "<<endl;
        }
        else if(curr == 1)
        {
            front = -1;
            rear = -1;
            curr--;
        }
        else{
            front = (front + 1) % MAX;
            curr--;
        }
    }

    void display()
    {
        if(curr == 0)
        {
            cout<<"Queue is empty "<<endl;
        }
        else{
            int count = curr;
            int i = front;
            while(count--)
            {
                cout<<q[i]<<"\n";
                i = (i + 1) % MAX;
            }
            cout<<endl;
        }
    }
};

int main()
{
    queueImplementation q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.display();
    q1.pop();
    return 0;
}