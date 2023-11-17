#include<bits/stdc++.h>
using namespace std;

class Stack{
    
    int *arr;
    int top=-1;
    int size;
    public: 
    Stack(int size){
        this->size=size;
      arr=new int[size];
     this-> top=-1;

    }
     bool isFull(){
        if(this->size-1==this->top){
            return true;
        }
       return false;

    }
      bool isempty(){
        if(this->top==-1) {return true;}
       else return false;

    }

    int push(int val){
        if(isFull()){
            
            return -1;
        }
        this->top++;
        arr[this->top]=val;
   return arr[this->top];
       
     
    }
    int pop(){
        if(isempty()){
            return -1;
        }
        return arr[this->top--];

    }
  
    int topvalue(){

        return arr[this->top];

    }
   

};
int main(){
 Stack * sanjay=new Stack(10);
 int p1=sanjay->push(12);
 
 cout<<p1<<endl;
 int p2=sanjay->push(14);
 
 cout<<p2<<endl;
 int p3=sanjay->push(16);
 
 cout<<p3<<endl;
 bool isfull=sanjay->isFull();
 cout<<isfull<<endl;
 bool empty=sanjay->isempty();
 cout<<empty<<endl;
 int pop1=sanjay->pop();
 cout<<pop1<<endl;


   
    return 0;
}