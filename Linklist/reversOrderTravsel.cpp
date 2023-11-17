#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }

};
void ReversalTravals(Node *& head){
    if(head==NULL){
        return;
    }
   
    ReversalTravals(head->next);
     cout<<head->data<<"=>";
    

}
void InsertAthead(Node * &head, int val){
    Node *newNode= new Node(val);
    newNode->next=head;
    head=newNode;


}
void reverseLinklist( Node *&head){
   // cout<<"hello";
Node *previous=NULL;
Node*current=head;

while(current!=NULL){
    Node*currNext=current->next;
    current->next=previous;
    previous=current;
    current=currNext;
   
}

//cout<<"hi";

}
void display(Node * &head){
   Node *tmp=head;
   while(tmp){
    cout<<tmp->data<<"=>";
    tmp=tmp->next;
   }
};
void Reverse( Node *&current, Node * &Prev){

     if(current){
   display(Prev);
         return ;
     }

     Node *currentNext=current->next;
     current->next=Prev;
     Prev=current;
     current=currentNext;
     Reverse(current, Prev);

 }


int main(){
    Node *newNode=new Node(24);
    Node *head= newNode;

    
    InsertAthead(head,30);
    InsertAthead(head,34);
    InsertAthead(head,39);
    InsertAthead(head,41);
      
   Node* current =head;
   Node *Prev=NULL;

     display(head);
   Reverse(current, Prev);
   

   //ReversalTravals(head);
   //cout<<endl;
   
   //display(head);
   
}