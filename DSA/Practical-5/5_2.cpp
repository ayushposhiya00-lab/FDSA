#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
class SinglyCircular{
    Node* head;
public:
    SinglyCircular(){
        head=NULL;
    }
    void insert(int pos,int data){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            newNode->next=head;
            return;
        }
        if(pos==1){
            Node* temp=head;
            while(temp->next!=head)
                temp=temp->next;
            newNode->next=head;
            temp->next=newNode;
            head=newNode;
            return;
        }
        Node* temp=head;
        for(int i=1;i<pos-1 && temp->next!=head;i++)
            temp=temp->next;
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void remove(int pos){
        if(head==NULL)
            return;
        if(head->next==head){
            delete head;
            head=NULL;
            return;
        }
        if(pos==1){
            Node* temp=head;
            while(temp->next!=head)
                temp=temp->next;
            Node* del=head;
            head=head->next;
            temp->next=head;
            delete del;
            return;
        }
        Node* temp=head;
        for(int i=1;i<pos-1 && temp->next!=head;i++)
            temp=temp->next;
        Node* del=temp->next;
        temp->next=del->next;
        delete del;
    }
    void display(){
        if(head==NULL){
            cout<<"Empty\n";
            return;
        }
        Node* temp=head;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);
        cout<<endl;
    }
};
class DNode{
public:
    int data;
    DNode* next;
    DNode* prev;
    DNode(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};
class DoublyCircular{
    DNode* head;
public:
    DoublyCircular(){
        head=NULL;
    }
    void insert(int pos,int data){
        DNode* newNode=new DNode(data);
        if(head==NULL){
            head=newNode;
            newNode->next=head;
            newNode->prev=head;
            return;
        }
        if(pos==1){
            DNode* last=head->prev;
            newNode->next=head;
            newNode->prev=last;
            last->next=newNode;
            head->prev=newNode;
            head=newNode;
            return;
        }
        DNode* temp=head;
        for(int i=1;i<pos-1 && temp->next!=head;i++)
            temp=temp->next;
        newNode->next=temp->next;
        newNode->prev=temp;
        temp->next->prev=newNode;
        temp->next=newNode;
    }
    void remove(int pos){
        if(head==NULL)
            return;
        if(head->next==head){
            delete head;
            head=NULL;
            return;
        }
        DNode* del=head;
        for(int i=1;i<pos && del->next!=head;i++)
            del=del->next;
        if(pos==1)
            head=head->next;
        del->prev->next=del->next;
        del->next->prev=del->prev;
        delete del;
    }
    void display(){
        if(head==NULL){
            cout<<"Empty\n";
            return;
        }
        DNode* temp=head;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);
        cout<<endl;
    }
};
int main(){

    SinglyCircular s;

    cout<<"Singly Circular:\n";
    s.insert(1,10);
    s.display();
    s.insert(2,20);
    s.display();
    s.insert(2,15);
    s.display();
    s.remove(2);
    s.display();
    s.remove(1);
    s.display();
    DoublyCircular d;
    
    cout<<"\nDoubly Circular:\n";
    d.insert(1,10);
    d.display();
    d.insert(2,20);
    d.display();
    d.insert(2,15);
    d.display();
    d.remove(2);
    d.display();
    d.remove(1);
    d.display();
    return 0;
}