#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}*front = NULL, *rear = NULL, *t;


void enqueue(int n)
{
    t = new Node();
    t->data = n;
    t->next = NULL;
    if(front == NULL && rear == NULL)
    {
        front = t;
        rear = t;
    }
    else{
        rear->next = t;
        rear = t;
    }
}

void dequeue()
{
    if(front == NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        t = front;
        front = front->next;
        cout<<"Dequeued element: "<<t->data<<endl;
        delete t;

        if(front == NULL)
        {
            rear = NULL;
        }
}
}

void display()
{
    if(front == NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        t = front;
        while(t!=NULL)
        {
            cout<<t->data<<"\n";
            t = t->next;
        }
    }
}
int main()
{
    enqueue(10);
    enqueue(20);    
    enqueue(30);
    dequeue();
    display();
    return 0;
}