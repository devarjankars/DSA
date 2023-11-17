#include<bits/stdc++.h>
using namespace std;

class Node{
    public  :
    int data;
    Node *next;
    Node *prev;


    Node(int val){
        this->data=val;
        next=NULL;
        prev=NULL;
    }
};


void insertAtHead(Node * &head,Node *&prev, int x){
 Node *newNode=new Node(x);
 if(head==NULL){
    head=newNode;
    prev=NULL;
 }
 else{
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
 }

}
void display(Node * head){
    Node *tmp=head;
    while(tmp){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
}

int main(){

Node *head=NULL;
Node  *tail=NULL;
insertAtHead(head,tail,25);
insertAtHead(head,tail,29);
insertAtHead(head,tail,32);
insertAtHead(head,tail,36);
display(head);

  cout<<head->next<<"<";
    return 0;

}