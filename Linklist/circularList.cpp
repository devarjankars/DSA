#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};


void display(Node *&head){
  Node * tmp=head;
  cout<<tmp->data;
  tmp=tmp->next;
  while(tmp !=head){
    cout<<tmp->data<<"=>";
    tmp=tmp->next;
  }
}
void InsertAtCircular(Node * head, int data){
     Node *tail= head;
     Node *newNode=new Node(data);

     if(tail==NULL){
        tail=newNode;
        newNode->next=tail;
     }
    
     while(tail->next !=NULL){
        tail=tail->next;
     }
     newNode->next=tail->next;
     tail->next=newNode;


}


int main(){
    Node * head=NULL;
    InsertAtCircular(head,46);
    InsertAtCircular(head,56);
    InsertAtCircular(head,61);
    InsertAtCircular(head,67);
    display(head);


}