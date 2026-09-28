#include<iostream>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data=val;
        prev=nullptr;
        next=nullptr;
    }
};
void addBeginning(node*& head,int val)
{
    node* newnode=new node(val);
    if(head!=nullptr)
        head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void addEnd(node*& head,int val)
{
    node* newnode=new node(val);
    if(head==nullptr)
    {
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr)
        temp=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
}
void insertAfter(node*& head,int song,int val)
{
    node* temp=head;
    while(temp!=nullptr&&temp->data!=song)
        temp=temp->next;
    if(temp==nullptr)
    {
        cout<<"Song not found"<<endl;
        return;
    }
    node* newnode=new node(val);
    newnode->next=temp->next;
    newnode->prev=temp;
    if(temp->next!=nullptr)
        temp->next->prev=newnode;
    temp->next=newnode;
}
void removeFirst(node*& head)
{
    if(head==nullptr)
    {
        cout<<"Playlist is empty"<<endl;
        return;
    }
    node* temp=head;
    head=head->next;
    if(head!=nullptr)
        head->prev=nullptr;
    delete temp;
}
int countSongs(node* head)
{
    int count=0;
    while(head!=nullptr)
    {
        count++;
        head=head->next;
    }
    return count;
}
void display(node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    node* head=nullptr;
    addBeginning(head,20);
    cout<<"After adding beginning: ";
    display(head);
    addEnd(head,40);
    cout<<"After adding end: ";
    display(head);
    insertAfter(head,20,30);
    cout<<"After inserting after 20: ";
    display(head);
    cout<<"Count: "<<countSongs(head)<<endl;
    removeFirst(head);
    cout<<"After removing first: ";
    display(head);
    cout<<"Count: "<<countSongs(head)<<endl;
    return 0;
}