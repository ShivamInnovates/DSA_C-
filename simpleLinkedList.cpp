#include<iostream>
using namespace std;

struct Node {
    public :
    int data;
    Node* next;
}*start = NULL,*t,*p;

void i_begin()
{
    t = new Node();
    cout<<"Enter the data:"<<endl;
    cin>>t->data;
    if(start == NULL)
    {
        start = t;
        t->next= NULL;
        cout<<t->data<<" inserted successfully at the beginning"<<endl;
    }
    else{
        t->next = start;
        start = t;
        cout<<t->data<<" inserted successfully at the beginning"<<endl;
    }
}

void i_end()
{
    if(start == NULL)
    {
        cout<<"Linked List is empty"<<endl;
    }
    else{
        t = new Node();
        cout<<"Enter the data:"<<endl;
        cin>>t->data;
        p = start;
        while(p->next!=NULL)
        {
            p= p->next;
        }
        p->next = t;
        t->next = NULL;
        cout<<t->data<<" inserted successfully at the end"<<endl;
    }
}

void i_pos()
{
    int pos;
    if(start == NULL)
    {
        cout<<"Linked List is empty"<<endl;
    }
    else{
        t = new Node();
        cout<<"Enter the data:"<<endl;
        cin>>t->data;
        cout<<"Enter the position: "<<endl;
        cin>>pos;
        p = start;
        for(int i =1; i<pos-1 && p!=NULL; i++)
        {
            p = p->next;
        }
       t->next = p->next;
       p->next = t;
        cout<<t->data<<" inserted successfully at the end"<<endl;
    }
}
void display()
{
    if(start == NULL)
    {
        cout<<"Linked List is empty"<<endl;
    }
    else{
        p = start;
        while(p!=NULL)
        {
            cout<<p->data<<"->";
            p = p->next;
        }
    }
}


int main()
{
   while(true)
   {
         cout<<"1. Insert at beginning"<<endl;
         cout<<"2. Insert at end"<<endl;    
            cout<<"3. Insert at position"<<endl;
            cout<<"4. Display"<<endl;
            cout<<"5. Exit"<<endl;
            int choice;
            cout<<"Enter your choice: "<<endl;
            cin>>choice;
            switch(choice)
            {
                case 1: i_begin();
                break;
                case 2: i_end();
                break;
                case 3: i_pos();
                break;
                case 4: display();
                break;
                case 5: exit(0);
                break;
                default: cout<<"Invalid choice"<<endl;
            }
   }

    return 0;
}