#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
}*top=NULL,*t,*p;

void push(int n)
{
    t = new Node();
    t->data = n;
    if(top == NULL)
    {
        t->next = NULL;
        top = t;
    }
    else{
        t->next = top;
        top = t;
    }
}

void pop()
{
    if(top == NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        p = top;
        top = top->next;
        cout<<"Popped element: "<<p->data<<endl;
        delete p;
    }
}
void display()
{
    if(top == NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        p = top;
        while(p!=NULL)
        {
            cout<<p->data<<"->";
            p = p->next;
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    display();
    return 0;
}