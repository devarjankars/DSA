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

void display( Node *& head){
    Node *tmp=head;
    while(tmp){
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}

void kthPosition(Node * &head , int k, int val){
    Node *newNode=new Node(val);
    Node *tmp=head;

    int pos=k-1;
    if(pos==0){
        head->next=newNode;
        return;
    }
    else{
        k--;
    while(k>1){
      
        tmp=tmp->next;
          k--;
    }
    newNode->next=tmp->next;
    tmp->next =newNode;
    }

}
void insertAtBack(Node * &head, int val){
    Node *newNode=new Node(val);
    Node *tmp=head;
    while(tmp->next){
        tmp=tmp->next;
    }
    tmp->next=newNode;
}

int main(){
    Node *newNode=new Node(54);
Node *head=newNode;

    insertAtBack(head, 12);
    insertAtBack(head,89);
    insertAtBack(head,90);
    insertAtBack(head,99);
    kthPosition(head,3,67);
    display(head);
    return 0;
}

