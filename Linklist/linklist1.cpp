#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node *next;
      
      Node(int val){
        this->val=val;
        this->next=NULL;
      }
      



};
void insertAtHead(Node* &head, int val){

    Node *newNode=new Node(val);
    newNode->next= head;
    head=newNode;


}
void insertAtBack(Node * &head,int val){
     Node *tmp=head;
     while(tmp->next != NULL){
        tmp=tmp->next;
     }
     Node *newNode=new Node(val);
     tmp->next=newNode;
}

void display( Node* head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }

}


int main(){
    Node *newNode=new Node(12);
    Node *head=newNode;
      insertAtHead(head, 12);
      insertAtHead(head, 45);
     insertAtBack(head,78);
     insertAtBack(head,65);
     display(head);
    
    return 0;
}
