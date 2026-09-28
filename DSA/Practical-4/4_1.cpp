#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtBeginning(node*& head,int val)
{
    node* newnode=new node(val);
    newnode->next=head;
    head=newnode;
}
void insertAtEnd(node*& head,int val)
{
    node* newnode=new node(val);

    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newnode;
}
void insertAtPosition(node*& head,int val,int pos)
{
    if(pos==1)
    {
        insertAtBeginning(head,val);
        return;
    }
    node* newnode=new node(val);
    node* temp=head;
    for(int i=1;i<pos-1;i++)
    {
        if(temp==NULL)
        {
            cout<<"Invalid position"<<endl;
            return;
        }
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Invalid position"<<endl;
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* n1=new node(10);
    node* n2=new node(20);
    node* n3=new node(30);

    node* head=n1;
    n1->next=n2;
    n2->next=n3;
    cout<<"Original: ";
    display(head);

    insertAtBeginning(head,5);
    cout<<"Beginning: ";
    display(head);

    insertAtEnd(head,40);
    cout<<"End: ";
    display(head);

    insertAtPosition(head,25,4);
    cout<<"Position: ";
    display(head);

    return 0;
}