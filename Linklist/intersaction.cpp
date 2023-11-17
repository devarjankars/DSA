#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int data)
{
    this->data=data;
    next=NULL;
}
};

void insertAt(Node * & head, int d){
     Node *newNode=new Node(d);
     if(head==NULL){
       head= newNode;
        return;
     }
     else{
        newNode->next= head;
        head=newNode;


     }
}
int main(){



    return 0;
}