#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=nullptr;
    }
};
void deletionbyvalue(node*& head,int val)
{
    if(head==nullptr)
    {
        cout<<"Empty list"<<endl;
        return;
    }
    if(head->data==val)
    {
        node* p=head;
        head=head->next;
        delete p;
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr&&temp->next->data!=val)
        temp=temp->next;
    if(temp->next==nullptr)
    {
        cout<<"Not found"<<endl;
        return;
    }
    node* p=temp->next;
    temp->next=p->next;
    delete p;
}
void reverseprinting(node*& head)
{
    node* prev=nullptr;
    node* curr=head;

    while(curr!=nullptr)
    {
        node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    head=prev;
}

void display(node* head)
{
    node* temp=head;

    while(temp!=nullptr)
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
    node* n4=new node(40);

    node* head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;

    cout<<"Original: ";
    display(head);

    deletionbyvalue(head,20);

    cout<<"After deletion: ";
    display(head);

    reverseprinting(head);

    cout<<"Reverse: ";
    display(head);

    return 0;
}